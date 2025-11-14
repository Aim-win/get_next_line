#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int main()
{
	// int  fd1;
    // int  fd3;
    int  fd;
	int len;
    // fd1 = open("E1.txt", O_RDONLY);
    // fd3 = open("E3.txt", O_RDONLY);
    fd = open("E2.txt", O_RDONLY);
    int i = 1;
	len = 11;
    while (i <= len)
		printf("%d --> %s", i++, get_next_line(fd));
	printf("\n");
	return (0);
}
/*
int main()
{
    // char *line;
	// int  count;

	// count = 0;

	// if (fd == -1)
	// {
	//     printf("Error opening file");
	//     return (1);
	// }
	// while (1)
	// {
	// 	line = get_next_line(fd);
	// 	if (line == NULL)
	// 		break ;
	// 	count++;
	// 	printf("[%d]:%s\n", count, line);
	// 	free(line);
	// 	line = NULL;
	// }
	// close(fd);
}*/