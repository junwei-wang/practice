/*
 * Filename:      prog5-5.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-27 13:12
 * Description:
 *
 */
#include "apue.h"

int main(int argc, char *argv[]) {
	if (argc != 3)
		err_quit("usage: %s <directory> <prefix>", argv[0]);

	printf("%s\n", tempnam(argv[1][0]!=' ' ? argv[1] : NULL, 
				argv[2][0]!=' ' ? argv[2] : NULL ));

	exit(0);
}
