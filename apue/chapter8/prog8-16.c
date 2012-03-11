/*
 * Filename:      prog8-16.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-10 18:05
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
		sleep(2);
		exit(2);
	}

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid > 0) {
		sleep(4);
		abort();
	}

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid > 0) {
		if (execl("/bin/dd", "dd", "if=/etc/vimrc", "of=/dev/null", 
					(char *)0) == -1)
			err_sys("execl error");
		exit(7);
	}

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid > 0) {
		sleep(8);
		exit(0);
	}

	sleep(8);
	kill(getpid(), SIGKILL);
	exit(6);
}
