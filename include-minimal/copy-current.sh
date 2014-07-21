# after a change, you need copy the generated .config to the repository

[ -z "$OUT" ] && exit 1

bb_obj=$OUT/obj/busybox/minimal

cat $bb_obj/.config | grep -v CONFIG_CROSS_COMPILER_PREFIX > ../.config-minimal

