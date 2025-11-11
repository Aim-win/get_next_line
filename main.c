#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int main()
{
	int  fd;
	char *line;
	int  count;

	count = 0;
	fd = open("E3.txt", O_RDONLY | O_CREAT , 0777);
	if (fd == -1)
	{
	printf("Error opening file");
	return (1);
	}
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		count++;
		printf("[%d]:%s\n", count, line);
		free(line);
		line = NULL;
	}
	close(fd);
	return (0);
}
