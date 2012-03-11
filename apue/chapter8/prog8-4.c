/*
 * Filename:      prog8-4.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 22:06
 * Description:
 *
 */
#include "apue.h"
#include <sys/wait.h>

int main(void)
{
	pid_t	pid;
	int	status;

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid == 0)
		exit(7);
	
	if (wait(&status) != pid)
		err_sys("wait error");
	pr_exit(status);

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid == 0)
		abort();
	
	if (wait(&status) != pid)
		err_sys("wait error");
	pr_exit(status);

	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid == 0)
		status /= 0;
	
	if (wait(&status) != pid)
		err_sys("wait error");
	pr_exit(status);
}
