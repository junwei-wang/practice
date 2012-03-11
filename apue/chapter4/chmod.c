#include "apue.h"

int main(void)
{
	struct stat	statbuf;

	/* trun on the set-group-ID and turn off other write*/
	if (stat("foo", &statbuf) < 0)
		err_sys("stat error for foo");
	if (chmod("foo", (statbuf.st_mode & ~S_IWOTH) | S_ISGID) < 0)
		err_sys("chmod error for foo");

	/* change to rw-r--r-- */
	if (chmod("bar", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0)
		err_sys("chmod error for bar");

}
