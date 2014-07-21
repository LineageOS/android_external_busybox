# after .config setup, type "make prepare" to generate /include files
# this step is no more required to build busybox, it is made automatically
# in Android.mk (busybox_prepare module)

[ -z "$OUT" ] && exit 1

bb_obj=$OUT/obj/busybox/minimal

cat $bb_obj/.config | grep -v CONFIG_CROSS_COMPILER_PREFIX > ../.config-minimal

