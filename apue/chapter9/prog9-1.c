/*
 * Filename:      prog9-1.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-02-29 20:44
 * Description:
 *
 */
#include "apue.h"
#include <errno.h>

static void sig_hup(int);
static void pr_ids(char *);

int main(void)
{
	char	c;
	pid_t	pid;

	pr_ids("parent");
	if ((pid = fork()) < 0)
		err_sys("fork error");
	else if (pid > 0) {
		sleep(5);
		exit(0);
	} else {
		pr_ids("child");
		signal(SIGHUP, sig_hup);
		kill(getpid(), SIGTSTP);
		pr_ids("child");
		if (read(STDIN_FILENO, &c, 1) != 1)
			printf("read error from controlling TTY, errono = "
					"%d\n", errno);
		exit(0);
	}
}

static void sig_hup(int signo)
{
	printf("SIGHUP received, pid = %d\n", getpid());
}

static void pr_ids(char *name)
{
	printf("%s: pid = %d, ppid = %d, pgrp = %d, tpgrp = %d\n",
			name, getpid(), getppid(), getpgrp(),
			tcgetpgrp(STDIN_FILENO));
	fflush(stdout);
}
