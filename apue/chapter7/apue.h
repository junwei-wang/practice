/* Our own header, to be included before all standard system headers */

#ifndef _APUE_H_
#define _APUE_H_

#include <sys/stat.h>

#include <stdio.h>		/* for convience */
#include <stdlib.h>		/* for convience */
#include <unistd.h>		/* for convience */
#include <string.h>		/* for convience */
#define MAXLINE 4096		/* max line length */

void err_quit (const char*, ...);
void err_sys (const char*, ...);
void err_ret (const char*, ...);

#endif	/* _APUE_H */
