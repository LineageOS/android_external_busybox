#ifndef BB_ANDROID_SELINUX_H
#define BB_ANDROID_SELINUX_H

#include <selinux/selinux.h>
#include <selinux/label.h>
#include <selinux/android.h>

static struct selabel_handle *bb_sehandle;

/* Set flags controlling operation of matchpathcon_init or matchpathcon. */
#define MATCHPATHCON_BASEONLY 1 /* Only process the base file_contexts file. */
#define MATCHPATHCON_NOTRANS  2 /* Do not perform any context translation. */
#define MATCHPATHCON_VALIDATE 4 /* Validate/canonicalize contexts at init time. */

#define set_matchpathcon_canoncon(context) { bb_sehandle = context; }

#define matchpathcon(pathname, mode, context) \
	selabel_lookup(bb_sehandle, context, pathname, mode)

#define lgetfilecon_raw(path, context) \
	lgetfilecon(path, context)

#define security_canonicalize_context_raw(context, newctx) \
	security_canonicalize_context(context, newctx)

#define is_context_customizable(ctx) false

#define selinux_policy_root() "/file_contexts"

/* other functions stubs to fix or implement */
#define matchpathcon_index(pathname, mode, context) 0
#define matchpathcon_filespec_add(ino, n, path) 0
#define matchpathcon_filespec_destroy() {}
#define matchpathcon_checkmatches(str) {}
#define set_matchpathcon_flags(flags) {}
#define set_matchpathcon_printf(fn) {}
#define matchpathcon_filespec_eval() {}


static int selinux_getenforcemode(int *rc)
{
    if (rc) {
        *rc = security_getenforce();
        return 0;
    }
    return -1;
}

/* other functions stubs to fix or implement */
static int matchpathcon_init(char * pathname) {
    bb_sehandle = selinux_android_file_context_handle();
    return 0;
}


#endif /* BB_ANDROID_SELINUX_H */
