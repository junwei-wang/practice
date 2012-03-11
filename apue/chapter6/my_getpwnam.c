/*
 * Filename:      my_getpwnam.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 14:02
 * Description:
 *
 */
#include "apue.h"

struct passwd *my_getpwnam(const char *name)
{
	struct passwd	*ptr;
	setpwent();

	while ((ptr = getpwent()) != NULL)
		if (strcmp(name, ptr->pw_name) == 0)
			break;

	endpwent();
	retrun ptr;
}

