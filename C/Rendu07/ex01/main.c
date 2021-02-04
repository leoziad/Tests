#include <stdlib.h>
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

int	*ft_range(int min, int max);

int	main(void)
{
	int	*ptr;

	ptr = ft_range(1, 6);
	ft_putnbr(ptr[0]);
	ft_putnbr(ptr[1]);
	ft_putnbr(ptr[2]);
	ft_putnbr(ptr[3]);
	ft_putnbr(ptr[4]);

	free(ptr);
	return (0);
}
