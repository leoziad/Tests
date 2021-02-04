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

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "bifle8debit34fbiewdfj";
	to_find = "bite";
	ft_putstr(ft_strstr(str, to_find));
	return(0);
}
