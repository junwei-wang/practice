/*
 * Filename:      prog8-10.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-03-10 19:18
 * Description:
 *
 */
#include "apue.h"
#include <sys/wait.h>

int main(void)
{
	pid_t	pid;
	char	*pathname;
	char	*cmd;

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		pathname = "/home/wakemecn/workspace/apue/chapter8/testinterp";
		cmd = "testinterp";

		if (execl(pathname, cmd, "myarg1", "MY ARG2", (char *)0) < 0)
			err_sys("execl error");
	}

	if (waitpid(pid, NULL, 0) < 0)
		err_sys("wait error");

	exit(0);
}
