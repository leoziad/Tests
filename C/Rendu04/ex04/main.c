#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return(index);
}

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	*base;

	base = "0123456789ABCDEF";
	ft_putnbr_base(124, base);
	return(0);
}
