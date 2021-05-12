#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

int	get_next_line(int fd, char **line);

int		main(int argc, char **argv)
{
	(void)argc;
	
	char	*line = ft_strnew(500);
	int		fd = open(argv[1], O_RDONLY);
	//int		fd2 = open(argv[2], O_RDONLY);

	printf("%d\n", get_next_line(fd, &line));
	printf("line 1 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 2 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 3 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 4 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 5 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 6 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 7 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 8 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 9 : %s\n", line);
	printf("%d\n", get_next_line(fd, &line));
	printf("line 10 : %s\n", line);

	free (line);

	return (0);
}
