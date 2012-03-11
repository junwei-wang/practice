/*
 * Filename:      prog8-15.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 22:17
 * Description:
 *
 */
#include "apue.h"

int main(void)
{
	printf("real uid: %d\neffective uid: %d\n",
			getuid(), geteuid());
	exit(0);
}

