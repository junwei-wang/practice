/*
 * Filename:      problem9-2.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-10 17:09
 * Description:
 *
 */
#include "apue.h"

int main(void)
{
	pid_t	pid;

	if ((pid = fork()) < 0)
		err_sys("fork error");

	else if (pid > 0) {
		exit(0);
	}

	if ((pid = setsid()) == -1)
		err_sys("setsid error");
	system("ps -o pid,ppid,pgid,sid,comm");
	exit(0);
}

