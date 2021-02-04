#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	ft_putstr(argv[0]);
	return (0);
}
