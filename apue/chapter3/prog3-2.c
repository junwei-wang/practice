#include "apue.h"
#include <fcntl.h>

char    buf1[] = "abcdefghij";
char    buf2[] = "ABCDEFGHIJ";

int
main(void)
{
        int     fd;
        int     FILE_MODE = S_IRUSR|S_IWUSR| S_IRGRP | S_IWGRP | S_IROTH 
                            | S_IWOTH;

        if ((fd = creat("file.hole", FILE_MODE)) < 0)
                err_sys("Create error");

        if (write(fd, buf1, 10) != 10)
                err_sys("buf1 write error");
        /* offset is 10 now */
        if (lseek(fd, 16384, SEEK_SET) == -1)
                err_sys("lseek error");
        /* offset is 16384 now */
        if (write(fd, buf2, 10) != 10)
                err_sys("buf2 write error");
        /* offset is 16394 now */

        exit(0);
}
