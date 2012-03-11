/*
 * Filename:      prog5-3.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 12:46
 * Description:
 *
 */
#include "apue.h"

void pr_stdio(const char *, FILE *);

int main(void)
{
	FILE	*fp;
	fputs("enter any character\n", stdout);
	if (getchar() == EOF)
		err_sys("getchar error");
	fputs("one line to standard error\n", stderr);

	pr_stdio("stdin", stdin);
	pr_stdio("stdout", stdout);
	pr_stdio("stderr", stderr);

	if ((fp = fopen("/etc/vimrc", "r")) == NULL)
		err_sys("fopen error");;
	if (getc(fp) == EOF)
		err_sys("getc error");
	pr_stdio("/etc/vimrc", fp);
}

void pr_stdio(const char *name, FILE *fp)
{
	printf("stream = %s, ", name);

	if (fp->_IO_file_flags & _IO_UNBUFFERED)
		printf("unbuffered");
	else if (fp->_IO_file_flags & _IO_LINE_BUF)
		printf("line buffered");
	else
		printf("fullly buffered");

	printf(", buffer size  = %d\n", fp->_IO_buf_end - fp->_IO_buf_base);
}

