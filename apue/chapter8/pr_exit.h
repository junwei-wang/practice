/*
 * Filename:      pr_exit.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 14:48
 * Description:
 *
 */
#include "apue.h"
#include <sys/wait.h>

void pr_exit(int status)
{
	if (WIFEXITED(status))
		printf("normal termination, exit status = %d\n",
				WEXITSTATUS(status));
	else if (WIFSIGNALED(status))
		printf("abnormal termination, signal number = %d%s\n",
				WTERMSIG(status),
#ifdef WCOREDUMP
				WCOREDUMP(status) ? " (core file generated)"
				: ""
#else
				""
#endif
		      );
	else if (WIFSTOPPED(status))
		printf("child stopped, signal number = %d\n",
				WSTOPSIG(status));
}
