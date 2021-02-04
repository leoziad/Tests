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

int	ft_is_prime(int nb)
{
	int	index;

	index = nb - 1;
	if (nb < 3)
		return (0);
	while (index > 1)
	{
		if (nb % index == 0)
			return (0);
		index--;
	}
	return (1);
}


int	ft_find_next_prime(int nb);

int	main(void)
{
	ft_putnbr(ft_find_next_prime(120));
	return (0);
}
