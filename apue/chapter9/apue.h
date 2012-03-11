/* Our own header, to be included before all standard system headers */

#ifndef _APUE_H_
#define _APUE_H_

#include <sys/stat.h>
//#include <sys/types.h>

#include <stdio.h>		/* for convience */
#include <stdlib.h>		/* for convience */
#include <unistd.h>		/* for convience */
#include <string.h>		/* for convience */
#include <signal.h>
#define MAXLINE 4096		/* max line length */

/*
 * Prototypes for our own functions.
 */
void pr_exit(int);

int my_system(const char *);


void err_quit (const char*, ...);
void err_sys (const char*, ...);
void err_ret (const char*, ...);

#endif	/* _APUE_H */
