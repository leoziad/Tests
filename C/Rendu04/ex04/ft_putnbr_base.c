int	ft_strlen(char *str);

void	ft_putchar(char c);

void    ft_putnbr_base(int nbr, char *base)
{
	long int	lnbr;
	int		base_len;
	int		index;
	
	index = 0;
	lnbr = nbr;
	base_len = ft_strlen(base);
	if (base_len <= 1)
		return;
	while (base[index] != '\0')
	{
		if (base[index] == '-' || base[index] == '+')
			return;
		index++;
	}
	index = 0;
	if (nbr < 0)
	{
        	ft_putchar('-');
        	lnbr *= -1;
	}
	if (lnbr >= base_len)
		ft_putnbr_base(lnbr / base_len, base);
	ft_putchar(base[lnbr % base_len]);
}
