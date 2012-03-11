/*
 * Filename:      prog8-13.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 22:06
 * Description:
 *
 */
#include "apue.h"

int main(void)
{
	int	status;

	if ((status = my_system("date")) < 0)  {
		err_sys("system() error");
	}
	pr_exit(status);

	if ((status = my_system("nosuchcommand")) < 0)
		err_sys("system() error");
	pr_exit(status);

	if ((status = my_system("who; exit 44")) < 0)
		err_sys("system() error");
	pr_exit(status);
	
	exit(0);
}
