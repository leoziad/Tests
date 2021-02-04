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
