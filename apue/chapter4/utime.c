#include "apue.h"
#include <utime.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int		i, fd;
	struct stat	statbuf;
	struct utimbuf	timebuf;

	if (argc < 2)
		err_quit("usage: %s <pathname1> <pathname2> ...", argv[2]);

	for (i=1; i<argc; i++) {
		if (stat(argv[i], &statbuf) < 0) {
			err_sys("%s stat error", argv[i]);
			continue;
		}

		if ((fd = open(argv[i], O_RDWR | O_TRUNC)) < 0) {
			err_sys("%s open error", argv[i]);
			continue;
		}
		close(fd);

		timebuf.actime = statbuf.st_atime;
		timebuf.modtime = statbuf.st_mtime;
		if (utime(argv[i], &timebuf) < 0) {
			err_sys("%s utime error", argv[i]);
			continue;
		}
	}
	exit(0);
}
