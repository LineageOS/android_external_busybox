LOCAL_PATH := $(call my-dir)
BB_PATH := $(LOCAL_PATH)

# Bionic Branches Switches (GB/ICS/L)
BIONIC_ICS := true
BIONIC_L := false

# Make a static library for regex.
include $(CLEAR_VARS)
LOCAL_SRC_FILES := android/regex/bb_regex.c
LOCAL_C_INCLUDES := $(BB_PATH)/android/regex
LOCAL_CFLAGS := -Wno-sign-compare
LOCAL_MODULE := libclearsilverregex
include $(BUILD_STATIC_LIBRARY)

# Make a static library for RPC library (coming from uClibc).
include $(CLEAR_VARS)
LOCAL_SRC_FILES := $(shell cat $(BB_PATH)/android/librpc.sources)
LOCAL_C_INCLUDES := $(BB_PATH)/android/librpc
LOCAL_MODULE := libuclibcrpc
LOCAL_CFLAGS += -fno-strict-aliasing
ifeq ($(BIONIC_L),true)
LOCAL_CFLAGS += -DBIONIC_L
endif
include $(BUILD_STATIC_LIBRARY)

#####################################################################

# Execute make prepare for normal config & static lib (recovery)

LOCAL_PATH := $(BB_PATH)
include $(CLEAR_VARS)

# Explicitly set an architecture specific CONFIG_CROSS_COMPILER_PREFIX
ifeq ($(TARGET_ARCH),arm)
    BUSYBOX_CROSS_COMPILER_PREFIX := arm-eabi-
endif
ifeq ($(TARGET_ARCH),x86)
    BUSYBOX_CROSS_COMPILER_PREFIX := i686-linux-android-
endif
ifeq ($(TARGET_ARCH),mips)
    BUSYBOX_CROSS_COMPILER_PREFIX := mipsel-linux-android-
endif

BB_PREPARE_FLAGS:=
ifeq ($(HOST_OS),darwin)
    BB_HOSTCC := $(ANDROID_BUILD_TOP)/prebuilts/gcc/darwin-x86/host/i686-apple-darwin-4.2.1/bin/i686-apple-darwin11-gcc
    BB_PREPARE_FLAGS := HOSTCC=$(BB_HOSTCC)
endif

KERNEL_MODULES_DIR ?= /system/lib/modules

bb_gen := $(TARGET_OUT_INTERMEDIATES)/busybox

LOCAL_MODULE := busybox_prepare_full
LOCAL_MODULE_TAGS := eng debug
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(bb_gen)/full
LOCAL_SRC_FILES := .config-full
$(LOCAL_MODULE):
	@echo -e ${CL_GRN}"Prepare config for busybox binary"${CL_RST}
	@cd $(ANDROID_BUILD_TOP)
	@rm -rf $(bb_gen)/full
	@mkdir -p $(bb_gen)/full/include
	cat $(BB_PATH)/.config-full > $(bb_gen)/full/.config
	@echo "CONFIG_CROSS_COMPILER_PREFIX=\"$(BUSYBOX_CROSS_COMPILER_PREFIX)\"" >> $(bb_gen)/full/.config
	make -C $(BB_PATH) prepare O=$(bb_gen)/full $(BB_PREPARE_FLAGS)

include $(BUILD_PREBUILT)

LOCAL_PATH := $(BB_PATH)
include $(CLEAR_VARS)

LOCAL_MODULE := busybox_prepare_minimal
LOCAL_MODULE_TAGS := eng debug
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(bb_gen)/minimal
LOCAL_SRC_FILES := .config-minimal
$(LOCAL_MODULE):
	@echo -e ${CL_GRN}"Prepare config for libbusybox"${CL_RST}
	@cd $(ANDROID_BUILD_TOP)
	@rm -rf $(bb_gen)/minimal
	@mkdir -p $(bb_gen)/minimal/include
	cat $(BB_PATH)/.config-minimal > $(bb_gen)/minimal/.config
	@echo "CONFIG_CROSS_COMPILER_PREFIX=\"$(BUSYBOX_CROSS_COMPILER_PREFIX)\"" >> $(bb_gen)/minimal/.config
	make -C $(BB_PATH) prepare O=$(bb_gen)/minimal $(BB_PREPARE_FLAGS)

include $(BUILD_PREBUILT)

#####################################################################

LOCAL_PATH := $(BB_PATH)
include $(CLEAR_VARS)

KERNEL_MODULES_DIR ?= /system/lib/modules

SUBMAKE := make -s -C $(BB_PATH) CC=$(CC)

BUSYBOX_SRC_FILES = \
	$(shell cat $(BB_PATH)/busybox-$(BUSYBOX_CONFIG).sources) \
	libbb/android.c

ifeq ($(TARGET_ARCH),arm)
    BUSYBOX_SRC_FILES += \
	android/libc/arch-arm/syscalls/adjtimex.S \
	android/libc/arch-arm/syscalls/getsid.S \
	android/libc/arch-arm/syscalls/stime.S \
	android/libc/arch-arm/syscalls/swapon.S \
	android/libc/arch-arm/syscalls/swapoff.S \
	android/libc/arch-arm/syscalls/sysinfo.S
endif

ifeq ($(TARGET_ARCH),x86)
    BUSYBOX_SRC_FILES += \
	android/libc/arch-x86/syscalls/adjtimex.S \
	android/libc/arch-x86/syscalls/getsid.S \
	android/libc/arch-x86/syscalls/stime.S \
	android/libc/arch-x86/syscalls/swapon.S \
	android/libc/arch-x86/syscalls/swapoff.S \
	android/libc/arch-x86/syscalls/sysinfo.S
endif

ifeq ($(TARGET_ARCH),mips)
    BUSYBOX_SRC_FILES += \
	android/libc/arch-mips/syscalls/adjtimex.S \
	android/libc/arch-mips/syscalls/getsid.S \
	android/libc/arch-mips/syscalls/stime.S \
	android/libc/arch-mips/syscalls/swapon.S \
	android/libc/arch-mips/syscalls/swapoff.S \
	android/libc/arch-mips/syscalls/sysinfo.S
endif

BUSYBOX_C_INCLUDES = \
	$(BB_PATH)/include $(BB_PATH)/libbb \
	bionic/libc/private \
	bionic/libm/include \
	bionic/libc \
	bionic/libm \
	libc/kernel/common \
	external/libselinux/include \
	external/libsepol/include \
	$(BB_PATH)/android/regex \
	$(BB_PATH)/android/librpc

BUSYBOX_CFLAGS = \
	-Werror=implicit \
	-DNDEBUG \
	-DANDROID \
	-fno-strict-aliasing \
	-fno-builtin-stpcpy \
	-include $(bb_gen)/$(BUSYBOX_CONFIG)/include/autoconf.h \
	-D'CONFIG_DEFAULT_MODULES_DIR="$(KERNEL_MODULES_DIR)"' \
	-D'BB_VER="$(strip $(shell $(SUBMAKE) kernelversion)) $(BUSYBOX_SUFFIX)"' -DBB_BT=AUTOCONF_TIMESTAMP

# to handle differences in ICS/JB (ipv6)
ifeq ($(BIONIC_ICS),true)
    BUSYBOX_CFLAGS += -DBIONIC_ICS
endif

ifeq ($(BIONIC_L),true)
    BUSYBOX_CFLAGS += -DBIONIC_L
endif


# Build the static lib for the recovery tool

BUSYBOX_CONFIG:=minimal
BUSYBOX_SUFFIX:=static
LOCAL_SRC_FILES := $(BUSYBOX_SRC_FILES)
LOCAL_C_INCLUDES := $(bb_gen)/minimal/include $(BUSYBOX_C_INCLUDES)
LOCAL_CFLAGS := -Dmain=busybox_driver $(BUSYBOX_CFLAGS)
LOCAL_CFLAGS += \
  -DRECOVERY_VERSION \
  -Dgetusershell=busybox_getusershell \
  -Dsetusershell=busybox_setusershell \
  -Dendusershell=busybox_endusershell \
  -Dttyname_r=busybox_ttyname_r \
  -Dgetmntent=busybox_getmntent \
  -Dgetmntent_r=busybox_getmntent_r \
  -Dgenerate_uuid=busybox_generate_uuid
LOCAL_MODULE := libbusybox
LOCAL_MODULE_TAGS := eng debug
LOCAL_STATIC_LIBRARIES := libcutils libc libm libselinux libsepol
LOCAL_ADDITIONAL_DEPENDENCIES := busybox_prepare_minimal
include $(BUILD_STATIC_LIBRARY)


# Bionic Busybox /system/xbin

LOCAL_PATH := $(BB_PATH)
include $(CLEAR_VARS)

BUSYBOX_CONFIG:=full
BUSYBOX_SUFFIX:=bionic
LOCAL_SRC_FILES := $(BUSYBOX_SRC_FILES)
ifeq ($(BIONIC_ICS),true)
LOCAL_SRC_FILES += android/libc/__set_errno.c
endif
LOCAL_C_INCLUDES := $(bb_gen)/full/include $(BUSYBOX_C_INCLUDES)
LOCAL_CFLAGS := $(BUSYBOX_CFLAGS)
LOCAL_LDFLAGS += -Wl,--no-fatal-warnings
LOCAL_MODULE := busybox
LOCAL_MODULE_TAGS := eng debug
LOCAL_MODULE_PATH := $(TARGET_OUT_OPTIONAL_EXECUTABLES)
LOCAL_SHARED_LIBRARIES := libc libcutils libm
LOCAL_STATIC_LIBRARIES := libclearsilverregex libuclibcrpc libselinux libsepol
LOCAL_ADDITIONAL_DEPENDENCIES := busybox_prepare_full
include $(BUILD_EXECUTABLE)

BUSYBOX_LINKS := $(shell cat $(BB_PATH)/busybox-$(BUSYBOX_CONFIG).links)
# nc is provided by external/netcat
exclude := nc
SYMLINKS := $(addprefix $(TARGET_OUT_OPTIONAL_EXECUTABLES)/,$(filter-out $(exclude),$(notdir $(BUSYBOX_LINKS))))
$(SYMLINKS): BUSYBOX_BINARY := $(LOCAL_MODULE)
$(SYMLINKS): $(LOCAL_INSTALLED_MODULE)
	@echo -e ${CL_CYN}"Symlink:"${CL_RST}" $@ -> $(BUSYBOX_BINARY)"
	@mkdir -p $(dir $@)
	@rm -rf $@
	$(hide) ln -sf $(BUSYBOX_BINARY) $@

ALL_DEFAULT_INSTALLED_MODULES += $(SYMLINKS)

# We need this so that the installed files could be picked up based on the
# local module name
ALL_MODULES.$(LOCAL_MODULE).INSTALLED := \
    $(ALL_MODULES.$(LOCAL_MODULE).INSTALLED) $(SYMLINKS)


# Static Busybox

LOCAL_PATH := $(BB_PATH)
include $(CLEAR_VARS)

BUSYBOX_CONFIG:=full
BUSYBOX_SUFFIX:=static
LOCAL_SRC_FILES := $(BUSYBOX_SRC_FILES)
LOCAL_C_INCLUDES := $(bb_gen)/full/include $(BUSYBOX_C_INCLUDES)
LOCAL_CFLAGS := $(BUSYBOX_CFLAGS)
LOCAL_CFLAGS += \
  -Dgetusershell=busybox_getusershell \
  -Dsetusershell=busybox_setusershell \
  -Dendusershell=busybox_endusershell \
  -Dttyname_r=busybox_ttyname_r \
  -Dgetmntent=busybox_getmntent \
  -Dgetmntent_r=busybox_getmntent_r \
  -Dgenerate_uuid=busybox_generate_uuid
LOCAL_LDFLAGS += -Wl,--no-fatal-warnings
LOCAL_FORCE_STATIC_EXECUTABLE := true
LOCAL_MODULE := static_busybox
LOCAL_MODULE_STEM := busybox
LOCAL_MODULE_TAGS := optional
LOCAL_STATIC_LIBRARIES := libclearsilverregex libc libcutils libm libuclibcrpc libselinux libsepol
LOCAL_MODULE_CLASS := UTILITY_EXECUTABLES
LOCAL_MODULE_PATH := $(PRODUCT_OUT)/utilities
LOCAL_UNSTRIPPED_PATH := $(PRODUCT_OUT)/symbols/utilities
LOCAL_ADDITIONAL_DEPENDENCIES := busybox_prepare_full
include $(BUILD_EXECUTABLE)
