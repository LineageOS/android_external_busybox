/* vi: set sw=4 ts=4: */
/*
 * Android/bionic glue.
 *
 * Copyright (C) 2010 by Dylan Simon <dylan@dylex.net>
 *
 * Licensed under GPLv2, see file LICENSE in this tarball for details.
 */

#include <stdlib.h>
#include "libbb.h"

/* declared in stdlib.h */
int clearenv()
{
	environ = NULL;
	return 0;
}

/* bionic/stubs.c:ttyname not implemented anyway */
int ttyname_r(int fd, char *name, size_t namesize)
{
	char *t = ttyname(fd);
	if (!t)
		return -1;
	strncpy(name, ttyname(fd), namesize);
	return 0;
}

/* no /etc/shells anyway */
char *getusershell() { return NULL; }
void setusershell() {}
void endusershell() {}

struct mntent *getmntent_r(FILE *fp, struct mntent *mnt, char *buf, int buflen)
{
	char *tokp = NULL, *s;

	do {
		if (!fgets(buf, buflen, fp))
			return NULL;
		tokp = 0;
		s = strtok_r(buf, " \t\n", &tokp);
	} while (!s || *s == '#');

	mnt->mnt_fsname = s;
	mnt->mnt_freq = mnt->mnt_passno = 0;
	if (!(mnt->mnt_dir = strtok_r(NULL, " \t\n", &tokp)))
		return NULL;
	if (!(mnt->mnt_type = strtok_r(NULL, " \t\n", &tokp)))
		return NULL;
	if (!(mnt->mnt_opts = strtok_r(NULL, " \t\n", &tokp)))
		mnt->mnt_opts = "";
	else if ((s = strtok_r(NULL, " \t\n", &tokp)))
	{
		mnt->mnt_freq = atoi(s);
		if ((s = strtok_r(NULL, " \t\n", &tokp)))
			mnt->mnt_passno = atoi(s);
	}

	return mnt;
}

/* override definition in bionic/stubs.c */
struct mntent *getmntent(FILE *fp)
{
	static struct mntent mnt;
	static char buf[256];
	return getmntent_r(fp, &mnt, buf, 256);
}

/* not used anyway */
int addmntent(FILE *fp UNUSED_PARAM, const struct mntent *mnt UNUSED_PARAM)
{
	errno = ENOENT;
	return 1;
}

const char *hasmntopt(const struct mntent *mnt, const char *opt)
{
	const char *o = mnt->mnt_opts;
	size_t l = strlen(opt);

	while ((o = strstr(o, opt)) && 
			((o > mnt->mnt_opts && o[-1] != ',') || 
			 (o[l] != 0 && o[l] != ',' && o[l] != '=')));
	return o;
}

/* declared in grp.h, but not necessary */
#if !ENABLE_USE_BB_PWD_GRP
int setpwent() { return 0; }
void setgrent() {}
void endgrent() {}
#endif

