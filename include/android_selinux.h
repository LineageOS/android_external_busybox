#ifndef BB_ANDROID_SELINUX_H
#define BB_ANDROID_SELINUX_H

#include <selinux/label.h>

static struct selabel_handle *sehandle;

#define matchpathcon(pathname, mode, context) \
	selabel_lookup(sehandle, context, pathname, mode)

#define lgetfilecon_raw(path, context) \
	lgetfilecon(path, context)

/* to fix */
#define is_context_customizable(ctx) false

#define matchpathcon_index(pathname, mode, context) 0
#define matchpathcon_filespec_add(ino, n, path) 0
#define matchpathcon_filespec_destroy() {}
#define matchpathcon_checkmatches(str) {}
#define set_matchpathcon_flags(flags) {}
#define set_matchpathcon_printf(fn) {}
#define matchpathcon_filespec_eval() {}

#endif /* BB_ANDROID_SELINUX_H */
