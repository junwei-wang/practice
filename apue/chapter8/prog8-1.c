/*
 * Filename:      prog8-1.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 14:37
 * Description:
 *
 */
#include "apue.h"

int	glob = 6;
char	buf[] = "a write to stdout\n";

int main(void)
{
	int	var;
	pid_t	pid;
	
	var = 88;
	if (write(STDOUT_FILENO, buf, sizeof(buf) - 1) != sizeof(buf) - 1)
		err_sys("write error");
	printf("before fork");

	if ((pid = fork()) < 0) {
		err_sys("fork error");
	} else if (pid == 0) {
		glob++;
		var++;
	} else {
		sleep(2);
	}

	printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);
	exit(0);
}
