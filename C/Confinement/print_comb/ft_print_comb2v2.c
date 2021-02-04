#include <unistd.h> 

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

void ft_print_comb2()
{
    char a;
    char b;
    
    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(48 + a / 10);
            ft_putchar(48 + a % 10);
            ft_putchar(' ');
            ft_putchar(48 + b / 10);
            ft_putchar(48 + b % 10);
            if (a != 98 || b != 99)
            {
                ft_putstr(", ");
            }
            b++;
        }
        a++;
    }
}