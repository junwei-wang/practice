/*
 * Filename:      problem8-6.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-02-29 20:14
 * Description:
 *
 */
#include "apue.h"

int main(void)
{
	pid_t	pid;

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid == 0)
		exit(0);

	sleep(5);
	system("ps -o pid,ppid,state,tty,command");
	exit(0);
}

