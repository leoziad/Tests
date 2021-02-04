#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

static void ft_positive(long int nb)
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

void ft_putnbr(int nb)
{
    long int    lnb;

    lnb = nb;
    if (nb >= 0)
        ft_positive(nb);
    else
    {
        ft_putchar('-');
        ft_positive(-lnb);
    }
}

void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}


int	main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(tab, 10);
	ft_putnbr(tab[0]);	
	ft_putnbr(tab[1]);
	ft_putnbr(tab[2]);
	ft_putnbr(tab[3]);
	ft_putnbr(tab[4]);
	ft_putnbr(tab[5]);
	ft_putnbr(tab[6]);
	ft_putnbr(tab[7]);
	ft_putnbr(tab[8]);
	ft_putnbr(tab[9]);
	return(0);
}
