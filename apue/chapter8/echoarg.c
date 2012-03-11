/*
 * Filename:      echoarg.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 20:43
 * Description:
 *
 */
#include "apue.h"

int main(int argc, char *argv[])
{
	int		i;
	char		**ptr;
	extern char 	**environ;

	for (i=0; i<argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);

	exit(0);
}
