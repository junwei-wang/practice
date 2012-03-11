/*
 * Filename:      prog8-2.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-29 19:07
 * Description:
 *
 */
#include "apue.h"

int	glob = 6;

int main(void)
{
	int	var;
	pid_t	pid;
	
	var = 89;
	printf("before fork\n");

	if ((pid = vfork()) < 0) {
		err_sys("vfork error");
	} else if (pid == 0) {
		glob++;
		var++;
		//fclose(stdout);
		_exit(0);
	}

	printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);
	exit(0);
}
