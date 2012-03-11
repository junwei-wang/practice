/*
 * Filename:      prog5-4.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 13:06
 * Description:
 *
 */
#include "apue.h"

int main(void)
{
	char	name[L_tmpnam], line[MAXLINE];
	FILE	*fp;

	printf("%s\n", tmpnam(NULL));

	tmpnam(name);
	printf("%s\n", name);

	if ((fp = tmpfile()) == NULL)
		err_sys("tmpfile error");
	fputs("one line of output\n", fp);
	rewind(fp);
	if (fgets(line, sizeof(line), fp) == NULL)
		err_sys("fgets error");

	fputs(line, stdout);
	exit(0);
}
