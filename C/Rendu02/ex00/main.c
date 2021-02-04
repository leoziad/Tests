#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

int	main(void)
{
	char	*src;
	char	dest[100];

	src = "Mais qu'est-ce qu'il y a doudou dis donc ?";
	ft_putstr(ft_strcpy(dest, src));
	return(0);
}
