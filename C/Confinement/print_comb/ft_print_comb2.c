#include <unistd.h> 

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

static void ft_putchars(char a, char b, char c, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(' ');
    ft_putchar(c);
    ft_putchar(d);
    if (a != '9' || b != '8' || c != '9' || d != '9')
    {
        ft_putstr(", ");
    }
}

void ft_print_comb2(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    b = '0';
    c = '0';
    d = '1';      
    while (a != '9' || b != '8' || c != '9' || d != '9')
    {
        ft_putchars(a, b, c, d);
        if (b == '9' && c == '9' && d == '9')
        {
            a++;
            b = '0';
            c = a;
            d = '1';
            ft_putchars(a, b, c, d);
        }
        if (b == '8' && c == '9' && d == '9')
        {
            b++;
            c = a + 1;
            d = '0';
            ft_putchars(a, b, c, d);
        }
        if (c == '9' && d == '9')
        {
            b++;
            c = a;
            d = b + 1;
            ft_putchars(a, b, c, d);
        }
        if (d == '9')
        {
            c++;
            d = '0';
            ft_putchars(a, b, c, d);
        }
        d++;
    }
}
