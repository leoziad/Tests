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

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	tab[10];
	int	**range;
	
	range = &tab;
	ft_putnbr(ft_ultimate_range(range, 1, 6));
	return (0);
}
