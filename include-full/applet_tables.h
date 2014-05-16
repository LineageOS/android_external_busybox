/* This is a generated file, don't edit */

#define NUM_APPLETS 230

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
"fgrep" "\0"
"find" "\0"
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
"nohup" "\0"
"nslookup" "\0"
"ntpd" "\0"
"od" "\0"
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
"setsebool" "\0"
"setserial" "\0"
"setsid" "\0"
"sh" "\0"
"sha1sum" "\0"
"sha256sum" "\0"
"sha3sum" "\0"
"sha512sum" "\0"
"sleep" "\0"
"sort" "\0"
"split" "\0"
"stat" "\0"
"strings" "\0"
"stty" "\0"
"sum" "\0"
"swapoff" "\0"
"swapon" "\0"
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
grep_main,
find_main,
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
nohup_main,
nslookup_main,
ntpd_main,
od_main,
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
setsebool_main,
setserial_main,
setsid_main,
ash_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
sleep_main,
sort_main,
split_main,
stat_main,
strings_main,
stty_main,
sum_main,
swap_on_off_main,
swap_on_off_main,
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
0x0095,
0x0099,
0x009e,
0x00a1,
0x00a6,
0x80ac,
0x00b4,
0x00b8,
0x00bd,
0x00c0,
0x00c3,
0x00ca,
0x00d1,
0x00d4,
0x00d9,
0x00e1,
0x00e7,
0x00ec,
0x00f5,
0x00f8,
0x00fd,
0x0100,
0x0106,
0x010a,
0x0111,
0x0116,
0x011c,
0x0125,
0x012b,
0x0131,
0x0136,
0x0141,
0x014e,
0x0156,
0x015c,
0x0161,
0x0166,
0x0172,
0x0179,
0x017f,
0x0186,
0x018d,
0x0193,
0x019e,
0x01a5,
0x01af,
0x01b4,
0x01bb,
0x01c2,
0x01c7,
0x01cc,
0x01d1,
0x01d9,
0x01dc,
0x01e5,
0x01eb,
0x01f2,
0x01fa,
0x0201,
0x0208,
0x020b,
0x0210,
0x0218,
0x0221,
0x0226,
0x0229,
0x0231,
0x0234,
0x023b,
0x0241,
0x0246,
0x024c,
0x0252,
0x0257,
0x025c,
0x0264,
0x0268,
0x0275,
0x027c,
0x0281,
0x0287,
0x028f,
0x0296,
0x029d,
0x02a7,
0x02b1,
0x02b7,
0x02be,
0x02c5,
0x02cd,
0x02d6,
0x02db,
0x02e1,
0x02ec,
0x02f3,
0x02f6,
0x02ff,
0x0309,
0x0314,
0x0317,
0x031f,
0x0324,
0x032a,
0x0333,
0x0338,
0x033b,
0x0341,
0x0347,
0x434d,
0x0352,
0x0360,
0x0366,
0x036b,
0x0374,
0x037d,
0x0384,
0x0387,
0x038e,
0x0392,
0x0397,
0x039c,
0x03a5,
0x03ae,
0x03b5,
0x03bc,
0x03c2,
0x03c9,
0x03d4,
0x03d8,
0x03db,
0x03e1,
0x03e7,
0x03ed,
0x03f7,
0x03fe,
0x0401,
0x0405,
0x0414,
0x0418,
0x0421,
0x042c,
0x0437,
0x0440,
0x044a,
0x0454,
0x045b,
0x045e,
0x0466,
0x0470,
0x0478,
0x0482,
0x0488,
0x048d,
0x0493,
0x0498,
0x04a0,
0x04a5,
0x04a9,
0x04b1,
0x04b8,
0x04bd,
0x04c4,
0x04c8,
0x04cd,
0x04d1,
0x04d9,
0x04dd,
0x04e4,
0x04ec,
0x04f1,
0x04f6,
0x04fc,
0x0501,
0x0509,
0x050d,
0x0513,
0x4516,
0x0521,
0x0526,
0x052e,
0x0536,
0x053d,
0x0543,
0x054e,
0x0557,
0x055c,
0x0565,
0x056c,
0x0573,
0x0578,
0x057e,
0x0585,
0x058c,
0x0595,
0x059e,
0x05a1,
0x05a7,
0x05aa,
0x05af,
0x05b5,
0x05bc,
0x05c2,
0x05c5,
0x05cb,
0x05cf,
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
0x21,
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
0x21,
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
0x11,
0x22,
0x12,
0x11,
0x12,
0x21,
0x11,
0x12,
0x21,
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
0x12,
0x11,
0x11,
0x11,
0x21,
0x11,
0x11,
0x11,
0x12,
0x21,
0x11,
0x21,
0x11,
0x21,
0x12,
0x11,
0x21,
0x21,
0x22,
0x22,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
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
0x12,
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
};
