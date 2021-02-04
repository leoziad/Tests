#include <unistd.h>

void	ft_putchar(char c)
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

int	ft_char_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

int	ft_char_is_alphanum(char c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return(1);      
	else
		return(0);
}

int	ft_char_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return(1);
	else
		return(0);
}

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;

	str = "--+--+9475667ab6567";
	ft_putnbr(ft_atoi(str));
	return(0);
}
