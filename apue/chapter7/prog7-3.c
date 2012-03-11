/*
 * Filename:      prog7-3.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 22:37
 * Description:
 *
 */
#include "apue.h"

int main(int argc, char *argv[])
{
	int	i;
	
	for (i=0; i<argc; i++) {
		printf("%s ", argv[i]);
	}
	printf("\n");
	exit(0);
}

