#include <unistd.h> 

void    ft_putchar(char c);
void    ft_putstr(char *str);

static void ft_putchars(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (a != '7' || b != '8' || c != '9')
        ft_putstr(", ");
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';      
    while (a <= '7' || b <= '8' || c <= '9')
    {
        ft_putchars(a, b, c);
        if (b == '8')
        {
            a++;
            b = a;
        }
        if (c == '9')
        {
            b++;
            c = b;
        }
        c++;
    }
}
