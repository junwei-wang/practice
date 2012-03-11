#include "apue.h"

#define BUFFSIZE 4096

int main(void)
{
	int	c;

	while ((c = getc(stdin)) != EOF)
		if (putc(c, stdout) == EOF)
			err_sys("write error");
	if (ferror(stdin))
		err_sys("read error");
	
	exit(0);
}
