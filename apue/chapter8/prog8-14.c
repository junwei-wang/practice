/*
 * Filename:      prog8-14.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 22:11
 * Description:
 *
 */
#include "apue.h"

int main(int argc, char *argv[])
{
	int	status;

	if (argc < 2)
		err_quit("command-line argument required");

	if ((status = system(argv[1])) < 0)
		err_sys("system() error");
	pr_exit(status);

	exit(0);
}

