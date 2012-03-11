/*
 * Filename:      prog8-8.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 20:36
 * Description:
 *
 */
#include "apue.h"
#include <sys/wait.h>

char	*env_init[] = {"USER=unknown", "PATH=/tmp", NULL};

int main(void)
{
	pid_t	pid;
	char	*pathname;
	char	*filename;
	char	*cmd;

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		pathname = "/home/wakemecn/workspace/apue/chapter8/echoall";
		cmd = "echoall";

		if (execle(pathname, cmd, "myarg1", "MY ARG2", (char *)0,
					env_init) < 0)
			err_sys("execle error");
	}

	if (waitpid(pid, NULL, 0) < 0)
		err_sys("wait error");

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		filename = "echoall";
		cmd = "echoall";

		if (execlp(filename, cmd, "only one arg", (char *)0) < 0)
			err_sys("execlp error");
	}
	exit(0);
}

