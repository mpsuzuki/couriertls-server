/*
** Copyright 1998 - 2000 Double Precision, Inc.
** See COPYING for distribution information.
*/

#include	"numlib.h"
#include	<string.h>


char *libmail_str_uid_t(uid_t t, char *arg)
{
char	buf[NUMBUFSIZE];
char	*p=buf+sizeof(buf)-1;

	*p=0;
	do
	{
		*--p= '0' + (t % 10);
		t=t / 10;
	} while(t);
	return (strcpy(arg, p));
}
