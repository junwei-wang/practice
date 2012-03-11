/*
 * Filename:      mydate.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 22:17
 * Description:
 *
 */
#include "apue.h"
#include <time.h>

#define BUFSIZE	100

int main(void)
{
	time_t		tmp_cal;
	struct tm	*tm_ptr;
	char		buf[BUFSIZE + 1];
	char		*fmt;

	if ((tmp_cal = time(&tmp_cal)) == -1)
		err_sys("time error");
	tm_ptr = localtime(&tmp_cal);

	fmt = "%a %b %d %T %Z %Y";
	strftime(buf, BUFSIZE, fmt, tm_ptr);

	printf("%s\n", buf);
	exit(0);
}

