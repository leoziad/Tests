#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    long int    lnbr;

    lnbr = nbr;
    if (nbr < 0)
    {
        ft_putchar('-');
        lnbr *= -1;
    }
    if (lnbr >= 10)
        ft_putnbr(lnbr / 10);
    ft_putchar(48 + lnbr % 10);
}

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	ft_putnbr(ft_iterative_power(4, 3));
	return (0);
}
