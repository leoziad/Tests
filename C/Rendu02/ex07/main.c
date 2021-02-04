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

char	*ft_strupcase(char *str);

int	main(void)
{
	char	*str;

	str = "zdaiufiuaebfuzrbuizbrgu";
	ft_putstr(ft_strupcase(str));
	return(0);
}
