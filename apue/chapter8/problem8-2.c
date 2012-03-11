/*
 * Filename:      problem8-2.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-02-29 19:58
 * Description:
 *
 */
#include "apue.h"

static void f1(void), f2(void);

int main(void)
{
	f1();
	f2();
	_exit(0);
}

static void f1(void)
{
	pid_t	pid;

	printf("f1()\n");
	if ((pid = fork()) < 0)
		err_sys("fork error");
}

static void f2(void)
{
	char	buf[1000];
	int	i;

	printf("f2()\n");
	for (i = 0; i < sizeof(buf); i++)
		buf[i] = 0;
}
