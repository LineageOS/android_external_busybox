/* This is a generated file, don't edit */

#define NUM_APPLETS 177

const char applet_names[] ALIGN1 = ""
"[" "\0"
"[[" "\0"
"ash" "\0"
"awk" "\0"
"base64" "\0"
"basename" "\0"
"bbconfig" "\0"
"blkid" "\0"
"blockdev" "\0"
"bunzip2" "\0"
"bzcat" "\0"
"bzip2" "\0"
"cal" "\0"
"cat" "\0"
"catv" "\0"
"chattr" "\0"
"chcon" "\0"
"chgrp" "\0"
"chmod" "\0"
"chown" "\0"
"chroot" "\0"
"clear" "\0"
"cmp" "\0"
"cp" "\0"
"cpio" "\0"
"cut" "\0"
"date" "\0"
"dc" "\0"
"dd" "\0"
"depmod" "\0"
"devmem" "\0"
"df" "\0"
"diff" "\0"
"dirname" "\0"
"dmesg" "\0"
"dos2unix" "\0"
"du" "\0"
"echo" "\0"
"egrep" "\0"
"env" "\0"
"expand" "\0"
"expr" "\0"
"false" "\0"
"fdisk" "\0"
"fgrep" "\0"
"find" "\0"
"fold" "\0"
"free" "\0"
"freeramdisk" "\0"
"fstrim" "\0"
"fuser" "\0"
"getenforce" "\0"
"getopt" "\0"
"getsebool" "\0"
"grep" "\0"
"groups" "\0"
"gunzip" "\0"
"gzip" "\0"
"head" "\0"
"hexdump" "\0"
"id" "\0"
"insmod" "\0"
"install" "\0"
"kill" "\0"
"killall" "\0"
"killall5" "\0"
"less" "\0"
"ln" "\0"
"losetup" "\0"
"ls" "\0"
"lsattr" "\0"
"lsmod" "\0"
"lsof" "\0"
"lspci" "\0"
"lsusb" "\0"
"lzcat" "\0"
"lzop" "\0"
"lzopcat" "\0"
"makedevs" "\0"
"md5sum" "\0"
"mkdir" "\0"
"mkdosfs" "\0"
"mke2fs" "\0"
"mkfifo" "\0"
"mkfs.ext2" "\0"
"mkfs.vfat" "\0"
"mknod" "\0"
"mkswap" "\0"
"mktemp" "\0"
"modinfo" "\0"
"modprobe" "\0"
"more" "\0"
"mount" "\0"
"mountpoint" "\0"
"mv" "\0"
"nanddump" "\0"
"nandwrite" "\0"
"nice" "\0"
"nohup" "\0"
"od" "\0"
"patch" "\0"
"pgrep" "\0"
"pidof" "\0"
"pkill" "\0"
"printenv" "\0"
"printf" "\0"
"ps" "\0"
"pstree" "\0"
"pwd" "\0"
"rdev" "\0"
"readlink" "\0"
"realpath" "\0"
"renice" "\0"
"reset" "\0"
"resize" "\0"
"restorecon" "\0"
"rev" "\0"
"rm" "\0"
"rmdir" "\0"
"rmmod" "\0"
"run-parts" "\0"
"sed" "\0"
"selinuxenabled" "\0"
"seq" "\0"
"sestatus" "\0"
"setconsole" "\0"
"setenforce" "\0"
"setsebool" "\0"
"setserial" "\0"
"setsid" "\0"
"sh" "\0"
"sha1sum" "\0"
"sha256sum" "\0"
"sha512sum" "\0"
"sleep" "\0"
"sort" "\0"
"split" "\0"
"stat" "\0"
"strings" "\0"
"stty" "\0"
"swapoff" "\0"
"swapon" "\0"
"sync" "\0"
"sysctl" "\0"
"tac" "\0"
"tail" "\0"
"tar" "\0"
"tee" "\0"
"test" "\0"
"time" "\0"
"top" "\0"
"touch" "\0"
"tr" "\0"
"true" "\0"
"ttysize" "\0"
"tune2fs" "\0"
"umount" "\0"
"uname" "\0"
"unexpand" "\0"
"uniq" "\0"
"unix2dos" "\0"
"unlzma" "\0"
"unlzop" "\0"
"unxz" "\0"
"unzip" "\0"
"uptime" "\0"
"usleep" "\0"
"uudecode" "\0"
"uuencode" "\0"
"watch" "\0"
"wc" "\0"
"which" "\0"
"whoami" "\0"
"xargs" "\0"
"xzcat" "\0"
"yes" "\0"
"zcat" "\0"
;

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
test_main,
test_main,
ash_main,
awk_main,
base64_main,
basename_main,
bbconfig_main,
blkid_main,
blockdev_main,
bunzip2_main,
bunzip2_main,
bzip2_main,
cal_main,
cat_main,
catv_main,
chattr_main,
chcon_main,
chgrp_main,
chmod_main,
chown_main,
chroot_main,
clear_main,
cmp_main,
cp_main,
cpio_main,
cut_main,
date_main,
dc_main,
dd_main,
modprobe_main,
devmem_main,
df_main,
diff_main,
dirname_main,
dmesg_main,
dos2unix_main,
du_main,
echo_main,
grep_main,
env_main,
expand_main,
expr_main,
false_main,
fdisk_main,
grep_main,
find_main,
fold_main,
free_main,
freeramdisk_main,
fstrim_main,
fuser_main,
getenforce_main,
getopt_main,
getsebool_main,
grep_main,
id_main,
gunzip_main,
gzip_main,
head_main,
hexdump_main,
id_main,
modprobe_main,
install_main,
kill_main,
kill_main,
kill_main,
less_main,
ln_main,
losetup_main,
ls_main,
lsattr_main,
modprobe_main,
lsof_main,
lspci_main,
lsusb_main,
unlzma_main,
lzop_main,
lzop_main,
makedevs_main,
md5_sha1_sum_main,
mkdir_main,
mkfs_vfat_main,
mkfs_ext2_main,
mkfifo_main,
mkfs_ext2_main,
mkfs_vfat_main,
mknod_main,
mkswap_main,
mktemp_main,
modinfo_main,
modprobe_main,
more_main,
mount_main,
mountpoint_main,
mv_main,
nandwrite_main,
nandwrite_main,
nice_main,
nohup_main,
od_main,
patch_main,
pgrep_main,
pidof_main,
pgrep_main,
printenv_main,
printf_main,
ps_main,
pstree_main,
pwd_main,
rdev_main,
readlink_main,
realpath_main,
renice_main,
reset_main,
resize_main,
setfiles_main,
rev_main,
rm_main,
rmdir_main,
modprobe_main,
run_parts_main,
sed_main,
selinuxenabled_main,
seq_main,
sestatus_main,
setconsole_main,
setenforce_main,
setsebool_main,
setserial_main,
setsid_main,
ash_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
sleep_main,
sort_main,
split_main,
stat_main,
strings_main,
stty_main,
swap_on_off_main,
swap_on_off_main,
sync_main,
sysctl_main,
tac_main,
tail_main,
tar_main,
tee_main,
test_main,
time_main,
top_main,
touch_main,
tr_main,
true_main,
ttysize_main,
tune2fs_main,
umount_main,
uname_main,
expand_main,
uniq_main,
dos2unix_main,
unlzma_main,
lzop_main,
unxz_main,
unzip_main,
uptime_main,
usleep_main,
uudecode_main,
uuencode_main,
watch_main,
wc_main,
which_main,
whoami_main,
xargs_main,
unxz_main,
yes_main,
gunzip_main,
};
#endif

const uint16_t applet_nameofs[] ALIGN2 = {
0x0000,
0x0002,
0x0005,
0x0009,
0x000d,
0x0014,
0x001d,
0x0026,
0x002c,
0x0035,
0x003d,
0x0043,
0x0049,
0x004d,
0x0051,
0x0056,
0x005d,
0x0063,
0x0069,
0x006f,
0x0075,
0x007c,
0x0082,
0x0086,
0x0089,
0x008e,
0x0092,
0x0097,
0x009a,
0x009d,
0x00a4,
0x00ab,
0x00ae,
0x00b3,
0x00bb,
0x00c1,
0x00ca,
0x00cd,
0x00d2,
0x00d8,
0x00dc,
0x00e3,
0x00e8,
0x00ee,
0x00f4,
0x00fa,
0x00ff,
0x0104,
0x0109,
0x0115,
0x011c,
0x0122,
0x012d,
0x0134,
0x013e,
0x0143,
0x014a,
0x0151,
0x0156,
0x015b,
0x0163,
0x0166,
0x016d,
0x0175,
0x017a,
0x0182,
0x018b,
0x0190,
0x0193,
0x019b,
0x019e,
0x01a5,
0x01ab,
0x01b0,
0x01b6,
0x01bc,
0x01c2,
0x01c7,
0x01cf,
0x01d8,
0x01df,
0x01e5,
0x01ed,
0x01f4,
0x01fb,
0x0205,
0x020f,
0x0215,
0x021c,
0x0223,
0x022b,
0x0234,
0x0239,
0x023f,
0x024a,
0x024d,
0x0256,
0x0260,
0x0265,
0x026b,
0x026e,
0x0274,
0x027a,
0x0280,
0x0286,
0x028f,
0x0296,
0x0299,
0x02a0,
0x02a4,
0x02a9,
0x02b2,
0x02bb,
0x02c2,
0x02c8,
0x02cf,
0x02da,
0x02de,
0x02e1,
0x02e7,
0x02ed,
0x02f7,
0x02fb,
0x030a,
0x030e,
0x0317,
0x0322,
0x032d,
0x0337,
0x0341,
0x0348,
0x034b,
0x0353,
0x035d,
0x0367,
0x036d,
0x0372,
0x0378,
0x037d,
0x0385,
0x038a,
0x0392,
0x0399,
0x039e,
0x03a5,
0x03a9,
0x03ae,
0x03b2,
0x03b6,
0x03bb,
0x03c0,
0x03c4,
0x03ca,
0x03cd,
0x03d2,
0x03da,
0x03e2,
0x03e9,
0x03ef,
0x03f8,
0x03fd,
0x0406,
0x040d,
0x0414,
0x0419,
0x041f,
0x0426,
0x042d,
0x0436,
0x043f,
0x0445,
0x0448,
0x044e,
0x0455,
0x045b,
0x0461,
0x0465,
};


#define MAX_APPLET_NAME_LEN 14
