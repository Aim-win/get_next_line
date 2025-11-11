#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int main()
{
	int  fd;


	fd = open("E3.txt", O_RDONLY | O_CREAT , 0777);
	if (fd == -1)
	{
		printf("Error opening file");
		return (1);
	}

	printf("%s",get_next_line(fd));
	printf("%s",get_next_line(fd));
	// get_next_line(fd);
	// get_next_line(fd);


	return (0);
}
