/*
 * Filename:      uname.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 21:54
 * Description:
 *
 */
#include "apue.h"
#include <sys/utsname.h>

int main(void)
{
	struct utsname	st_utsname;

	if (uname(&st_utsname))
		err_sys("uname error");
	printf("sysname: %s\n", st_utsname.sysname);
	printf("nodename: %s\n", st_utsname.nodename);
	printf("release: %s\n", st_utsname.release);
	printf("version: %s\n", st_utsname.version);
	printf("machine: %s\n", st_utsname.machine);
	
	exit(0);
}
