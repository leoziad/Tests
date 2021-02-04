#include <unistd.h> 

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

//Version recursive

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