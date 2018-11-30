#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
    printf("\n\n\n\n");
	int		fd1;
    int		fd2;
    char    *line;
    int     i = -1;
    int     g;

 	fd1 = open(argv[1], O_RDWR);
    fd2 = open(argv[2], O_RDWR);

    while (++i < 20 && argc)
    {
        if (get_next_line(fd1, &line) == 1)
		{
           printf("fd1: %s\n\n\n", line);
		}
        ft_strdel(&line);
        if (get_next_line(fd2, &line) == 1)
		{
            printf("fd2: %s\n\n\n", line);
		}
        ft_strdel(&line);
    }
 	close(fd1);
    close(fd2);
	return (0);
}
