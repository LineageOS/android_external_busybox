/* This is a generated file, don't edit */

#define NUM_APPLETS 243

const char applet_names[] ALIGN1 = ""
"[" "\0"
"[[" "\0"
"adjtimex" "\0"
"arp" "\0"
"ash" "\0"
"awk" "\0"
"base64" "\0"
"basename" "\0"
"bbconfig" "\0"
"blkid" "\0"
"blockdev" "\0"
"brctl" "\0"
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
"chvt" "\0"
"clear" "\0"
"cmp" "\0"
"comm" "\0"
"cp" "\0"
"cpio" "\0"
"crond" "\0"
"crontab" "\0"
"cut" "\0"
"date" "\0"
"dc" "\0"
"dd" "\0"
"deallocvt" "\0"
"depmod" "\0"
"devmem" "\0"
"df" "\0"
"diff" "\0"
"dirname" "\0"
"dmesg" "\0"
"dnsd" "\0"
"dos2unix" "\0"
"du" "\0"
"echo" "\0"
"ed" "\0"
"egrep" "\0"
"env" "\0"
"expand" "\0"
"expr" "\0"
"false" "\0"
"fbsplash" "\0"
"fdisk" "\0"
"fgconsole" "\0"
"fgrep" "\0"
"find" "\0"
"findfs" "\0"
"flash_lock" "\0"
"flash_unlock" "\0"
"flashcp" "\0"
"flock" "\0"
"fold" "\0"
"free" "\0"
"freeramdisk" "\0"
"fstrim" "\0"
"fsync" "\0"
"ftpget" "\0"
"ftpput" "\0"
"fuser" "\0"
"getenforce" "\0"
"getopt" "\0"
"getsebool" "\0"
"grep" "\0"
"groups" "\0"
"gunzip" "\0"
"gzip" "\0"
"halt" "\0"
"head" "\0"
"hexdump" "\0"
"hwclock" "\0"
"id" "\0"
"ifconfig" "\0"
"inetd" "\0"
"insmod" "\0"
"install" "\0"
"ionice" "\0"
"iostat" "\0"
"ip" "\0"
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
"lzma" "\0"
"lzop" "\0"
"lzopcat" "\0"
"man" "\0"
"matchpathcon" "\0"
"md5sum" "\0"
"mesg" "\0"
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
"mpstat" "\0"
"mv" "\0"
"nanddump" "\0"
"nandwrite" "\0"
"nbd-client" "\0"
"nc" "\0"
"netstat" "\0"
"nice" "\0"
"nmeter" "\0"
"nohup" "\0"
"nslookup" "\0"
"ntpd" "\0"
"od" "\0"
"openvt" "\0"
"patch" "\0"
"pgrep" "\0"
"pidof" "\0"
"ping" "\0"
"pipe_progress" "\0"
"pkill" "\0"
"pmap" "\0"
"poweroff" "\0"
"printenv" "\0"
"printf" "\0"
"ps" "\0"
"pstree" "\0"
"pwd" "\0"
"pwdx" "\0"
"rdate" "\0"
"rdev" "\0"
"readlink" "\0"
"realpath" "\0"
"reboot" "\0"
"renice" "\0"
"reset" "\0"
"resize" "\0"
"restorecon" "\0"
"rev" "\0"
"rm" "\0"
"rmdir" "\0"
"rmmod" "\0"
"route" "\0"
"run-parts" "\0"
"runcon" "\0"
"rx" "\0"
"sed" "\0"
"selinuxenabled" "\0"
"seq" "\0"
"sestatus" "\0"
"setconsole" "\0"
"setenforce" "\0"
"setfiles" "\0"
"setkeycodes" "\0"
"setsebool" "\0"
"setserial" "\0"
"setsid" "\0"
"sh" "\0"
"sha1sum" "\0"
"sha256sum" "\0"
"sha3sum" "\0"
"sha512sum" "\0"
"sleep" "\0"
"smemcap" "\0"
"sort" "\0"
"split" "\0"
"stat" "\0"
"strings" "\0"
"stty" "\0"
"sum" "\0"
"swapoff" "\0"
"swapon" "\0"
"switch_root" "\0"
"sync" "\0"
"sysctl" "\0"
"tac" "\0"
"tail" "\0"
"tar" "\0"
"taskset" "\0"
"tee" "\0"
"telnet" "\0"
"telnetd" "\0"
"test" "\0"
"tftp" "\0"
"tftpd" "\0"
"time" "\0"
"timeout" "\0"
"top" "\0"
"touch" "\0"
"tr" "\0"
"traceroute" "\0"
"true" "\0"
"tty" "\0"
"ttysize" "\0"
"tune2fs" "\0"
"umount" "\0"
"uname" "\0"
"uncompress" "\0"
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
"vi" "\0"
"watch" "\0"
"wc" "\0"
"wget" "\0"
"which" "\0"
"whoami" "\0"
"xargs" "\0"
"xz" "\0"
"xzcat" "\0"
"yes" "\0"
"zcat" "\0"
;

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
test_main,
test_main,
adjtimex_main,
arp_main,
ash_main,
awk_main,
base64_main,
basename_main,
bbconfig_main,
blkid_main,
blockdev_main,
brctl_main,
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
chvt_main,
clear_main,
cmp_main,
comm_main,
cp_main,
cpio_main,
crond_main,
crontab_main,
cut_main,
date_main,
dc_main,
dd_main,
deallocvt_main,
depmod_main,
devmem_main,
df_main,
diff_main,
dirname_main,
dmesg_main,
dnsd_main,
dos2unix_main,
du_main,
echo_main,
ed_main,
grep_main,
env_main,
expand_main,
expr_main,
false_main,
fbsplash_main,
fdisk_main,
fgconsole_main,
grep_main,
find_main,
findfs_main,
flash_lock_unlock_main,
flash_lock_unlock_main,
flashcp_main,
flock_main,
fold_main,
free_main,
freeramdisk_main,
fstrim_main,
fsync_main,
ftpgetput_main,
ftpgetput_main,
fuser_main,
getenforce_main,
getopt_main,
getsebool_main,
grep_main,
id_main,
gunzip_main,
gzip_main,
halt_main,
head_main,
hexdump_main,
hwclock_main,
id_main,
ifconfig_main,
inetd_main,
insmod_main,
install_main,
ionice_main,
iostat_main,
ip_main,
kill_main,
kill_main,
kill_main,
less_main,
ln_main,
losetup_main,
ls_main,
lsattr_main,
lsmod_main,
lsof_main,
lspci_main,
lsusb_main,
unlzma_main,
unlzma_main,
lzop_main,
lzop_main,
man_main,
matchpathcon_main,
md5_sha1_sum_main,
mesg_main,
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
mpstat_main,
mv_main,
nandwrite_main,
nandwrite_main,
nbdclient_main,
nc_main,
netstat_main,
nice_main,
nmeter_main,
nohup_main,
nslookup_main,
ntpd_main,
od_main,
openvt_main,
patch_main,
pgrep_main,
pidof_main,
ping_main,
pipe_progress_main,
pgrep_main,
pmap_main,
halt_main,
printenv_main,
printf_main,
ps_main,
pstree_main,
pwd_main,
pwdx_main,
rdate_main,
rdev_main,
readlink_main,
realpath_main,
halt_main,
renice_main,
reset_main,
resize_main,
setfiles_main,
rev_main,
rm_main,
rmdir_main,
rmmod_main,
route_main,
run_parts_main,
runcon_main,
rx_main,
sed_main,
selinuxenabled_main,
seq_main,
sestatus_main,
setconsole_main,
setenforce_main,
setfiles_main,
setkeycodes_main,
setsebool_main,
setserial_main,
setsid_main,
ash_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
sleep_main,
smemcap_main,
sort_main,
split_main,
stat_main,
strings_main,
stty_main,
sum_main,
swap_on_off_main,
swap_on_off_main,
switch_root_main,
sync_main,
sysctl_main,
tac_main,
tail_main,
tar_main,
taskset_main,
tee_main,
telnet_main,
telnetd_main,
test_main,
tftp_main,
tftpd_main,
time_main,
timeout_main,
top_main,
touch_main,
tr_main,
traceroute_main,
true_main,
tty_main,
ttysize_main,
tune2fs_main,
umount_main,
uname_main,
uncompress_main,
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
vi_main,
watch_main,
wc_main,
wget_main,
which_main,
whoami_main,
xargs_main,
unxz_main,
unxz_main,
yes_main,
gunzip_main,
};
#endif

const uint16_t applet_nameofs[] ALIGN2 = {
0x0000,
0x0002,
0x0005,
0x000e,
0x0012,
0x0016,
0x001a,
0x0021,
0x002a,
0x0033,
0x0039,
0x0042,
0x0048,
0x0050,
0x0056,
0x005c,
0x0060,
0x0064,
0x0069,
0x0070,
0x0076,
0x007c,
0x0082,
0x0088,
0x008f,
0x0094,
0x009a,
0x009e,
0x00a3,
0x00a6,
0x00ab,
0x80b1,
0x00b9,
0x00bd,
0x00c2,
0x00c5,
0x00c8,
0x00d2,
0x00d9,
0x00e0,
0x00e3,
0x00e8,
0x00f0,
0x00f6,
0x00fb,
0x0104,
0x0107,
0x010c,
0x010f,
0x0115,
0x0119,
0x0120,
0x0125,
0x012b,
0x0134,
0x013a,
0x0144,
0x014a,
0x414f,
0x0156,
0x0161,
0x016e,
0x0176,
0x017c,
0x0181,
0x0186,
0x0192,
0x0199,
0x019f,
0x01a6,
0x01ad,
0x01b3,
0x01be,
0x01c5,
0x01cf,
0x01d4,
0x01db,
0x01e2,
0x01e7,
0x01ec,
0x01f1,
0x01f9,
0x0201,
0x0204,
0x020d,
0x0213,
0x021a,
0x0222,
0x0229,
0x0230,
0x0233,
0x0238,
0x0240,
0x0249,
0x024e,
0x0251,
0x0259,
0x025c,
0x0263,
0x0269,
0x026e,
0x0274,
0x027a,
0x0280,
0x0285,
0x028a,
0x0292,
0x0296,
0x02a3,
0x02aa,
0x02af,
0x02b5,
0x02bd,
0x02c4,
0x02cb,
0x02d5,
0x02df,
0x02e5,
0x02ec,
0x02f3,
0x02fb,
0x0304,
0x0309,
0x030f,
0x031a,
0x0321,
0x0324,
0x032d,
0x0337,
0x0342,
0x0345,
0x034d,
0x0352,
0x0359,
0x035f,
0x0368,
0x036d,
0x0370,
0x0377,
0x037d,
0x0383,
0x4389,
0x038e,
0x039c,
0x03a2,
0x03a7,
0x03b0,
0x03b9,
0x03c0,
0x03c3,
0x03ca,
0x03ce,
0x03d3,
0x03d9,
0x03de,
0x03e7,
0x03f0,
0x03f7,
0x03fe,
0x0404,
0x040b,
0x0416,
0x041a,
0x041d,
0x0423,
0x0429,
0x042f,
0x0439,
0x0440,
0x0443,
0x0447,
0x0456,
0x045a,
0x0463,
0x046e,
0x0479,
0x0482,
0x048e,
0x0498,
0x04a2,
0x04a9,
0x04ac,
0x04b4,
0x04be,
0x04c6,
0x04d0,
0x04d6,
0x04de,
0x04e3,
0x04e9,
0x04ee,
0x04f6,
0x04fb,
0x04ff,
0x0507,
0x050e,
0x051a,
0x051f,
0x0526,
0x052a,
0x052f,
0x0533,
0x053b,
0x053f,
0x0546,
0x054e,
0x0553,
0x0558,
0x055e,
0x0563,
0x056b,
0x056f,
0x0575,
0x4578,
0x0583,
0x0588,
0x058c,
0x0594,
0x059c,
0x05a3,
0x05a9,
0x05b4,
0x05bd,
0x05c2,
0x05cb,
0x05d2,
0x05d9,
0x05de,
0x05e4,
0x05eb,
0x05f2,
0x05fb,
0x0604,
0x0607,
0x060d,
0x0610,
0x0615,
0x061b,
0x0622,
0x0628,
0x062b,
0x0631,
0x0635,
};

const uint8_t applet_install_loc[] ALIGN1 = {
0x11,
0x22,
0x11,
0x11,
0x21,
0x22,
0x11,
0x11,
0x11,
0x11,
0x11,
0x21,
0x11,
0x11,
0x11,
0x12,
0x11,
0x11,
0x21,
0x12,
0x11,
0x21,
0x11,
0x11,
0x11,
0x11,
0x21,
0x12,
0x11,
0x22,
0x22,
0x11,
0x21,
0x12,
0x11,
0x21,
0x21,
0x11,
0x11,
0x12,
0x21,
0x21,
0x22,
0x11,
0x21,
0x11,
0x12,
0x21,
0x11,
0x12,
0x11,
0x11,
0x11,
0x21,
0x11,
0x21,
0x12,
0x22,
0x21,
0x21,
0x12,
0x11,
0x11,
0x22,
0x12,
0x11,
0x11,
0x21,
0x11,
0x11,
0x11,
0x11,
0x21,
0x11,
0x11,
0x11,
0x22,
0x11,
0x12,
0x11,
0x12,
0x11,
0x22,
0x11,
0x11,
0x12,
0x22,
0x22,
0x21,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x21,
0x22,
0x21,
0x11,
0x11,
0x11,
0x12,
0x21,
0x11,
0x11,
0x11,
0x11,
0x21,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x01,
};
