#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putchars(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if(a != '9' || b != '8' || c != '9' || d != '9')
	{
		ft_putstr(", ");
	}
}


void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while(a != '9' || b != '8' || c != '9' || d != '9')
	{
		ft_putchars(a, b, c, d);
		if(b == '9' && c == '9' && d == '9')
		{
			a++;
			b = '0';
			c = a;
			d = b;
		}
		if(c == '9' && d == '9')
		{
			b++;
			c = a;
			d = b;
		}
		if(d == '9')
		{
			c++;
			d = '0';
			ft_putchars(a, b, c, d);
		}
		d++;
	}
	ft_putchars(a, b, c, d);
}
		
