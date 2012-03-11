/*
 * Filename:		chdir.c
 * Author:		Junwei Wang(wakmecn@gmail.com)
 * Last Modified:	2012-02-26 17:15
 * Description:
 *
 */
#include "apue.h"
#include "path_alloc.h"

int main(void)
{
	char	*ptr;
	int	size;

	if (chdir("/tmp") < 0)
		err_sys("chdir failed");

	ptr = path_alloc(&size);
	if (getcwd(ptr, size) == NULL)
		err_sys("getcwd failed");
	printf("cwd = %s\n", ptr);
	exit(0);
}

