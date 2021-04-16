#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_positive(unsigned int nb)
{
	if (nb > 999999999)
		ft_putchar(48 + (nb % 10000000000 - nb % 1000000000) / 1000000000);
	if (nb > 99999999)
		ft_putchar(48 + (nb % 1000000000 - nb % 100000000) / 100000000);
	if (nb > 9999999)
		ft_putchar(48 + (nb % 100000000 - nb % 10000000) / 10000000);
	if (nb > 999999)
		ft_putchar(48 + (nb % 10000000 - nb % 1000000) / 1000000);
	if (nb > 99999)
		ft_putchar(48 + (nb % 1000000 - nb % 100000) / 100000);
	if (nb > 9999)
		ft_putchar(48 + (nb % 100000 - nb % 10000) / 10000);
	if (nb > 999)
		ft_putchar(48 + (nb % 10000 - nb % 1000) / 1000);
	if (nb > 99)
		ft_putchar(48 + (nb % 1000 - nb % 100) / 100);
	if (nb > 9)
		ft_putchar(48 + (nb % 100 - nb % 10) / 10);
	ft_putchar(48 + nb % 10);
}

void	ft_putnbr(int nb)
{
	long int	lnb;

	lnb = nb;
	if (nb >= 0)
		ft_positive(lnb);
	else
	{
		ft_putchar('-');
		ft_positive(-lnb);
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char	*s1 = "ca marche";
	char	*s2 = " pas";
	char	*s3 = "ca marche";
	char	*s4 = " pas";

	ft_putnbr(ft_strlcat(s1, s2, 3));
	ft_putchar('\n');
	ft_putstr(s1);
	ft_putchar('\n');
	ft_putnbr(strlcat(s3, s4, 3));
	ft_putchar('\n');
	ft_putstr(s3);
	return (0);
}
