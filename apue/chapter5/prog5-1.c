/*
 * Filename:      prog5-1.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-26 20:06
 * Description:
 *
 */
#include "apue.h"


int main(void)
{
	int	c;
	while ((c = getc(stdin)) != EOF)
		if (putc(c, stdout) == EOF)
			err_sys("output error");
	
	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}
