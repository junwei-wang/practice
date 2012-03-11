#include "apue.h"

int
main(void)
{
        if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
                printf("Cannot seek\n");
        else printf("Seek OK\n");
        exit(0);
}
