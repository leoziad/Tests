#include <stdlib.h>
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

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src;
	char	*ptr;

	src = "abcdefghijklmnopq";
	ptr = ft_strdup(src);
	ft_putstr(ptr);
	free(ptr);
	ptr = NULL;
	return (0);
}
