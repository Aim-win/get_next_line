#include <fcntl.h>
#include <stdio.h>
#include "get_next_line_bonus.h"

int main(void)
{
    int fd1 = open("ace.txt", O_RDONLY);
    int fd2 = open("ace2.txt", O_RDONLY);
    int fd3 = open("zoro.txt", O_RDONLY);

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        perror("open");
        return 1;
    }

    char *l1, *l2, *l3;

    printf("----- Reading from 3 files simultaneously -----\n");

    while (1)
    {
        l1 = get_next_line(fd1);
        l2 = get_next_line(fd2);
        l3 = get_next_line(fd3);

        if (!l1 && !l2 && !l3)
            break;

        //if (l1) printf("FD1: %s", l1);
        //if (l2) printf("FD2: %s", l2);
        if (l3) printf("FD3: %s", l3);

        free(l1);
        free(l2);
        free(l3);
        //sleep(1);
    }

    close(fd1);
    close(fd2);
    close(fd3);

    printf("\n----- TEST DONE -----\n");

    return 0;
}
