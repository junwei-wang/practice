/*
 * Filename:      echoall.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 20:39
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

	for (ptr=environ; *ptr!=0; ptr++)
		printf("%s\n", *ptr);
	exit(0);
}

