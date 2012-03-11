/*
 * Filename:      prog8-12.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 21:38
 * Description:
 *
 */
#include "apue.h"
#include <errno.h>
#include <unistd.h>

int my_system(const char *cmdstring)
{
	pid_t	pid;
	int	status;

	if (cmdstring == NULL)
		return 1;

	if ((pid = fork()) < 0) {
		status = -1;
	} else if (pid == 0) {
		execl("/bin/sh", "sh", "-c", cmdstring, (char *)0);
		_exit(127);
	} else {
		while (waitpid(pid, &status, 0) != pid) {
			if (errno != EINTR) {
				status = -1;
				break;
			}
		}
	}

	return status;
}

