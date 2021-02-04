#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

static void ft_mierda1(int index_x, int x)
{
    if (index_x == x || index_x == 1)
        ft_putchar('o');
    else if (index_x > 1)
        ft_putchar('-');
}

static void ft_mierda2(int index_x, int x)
{
    if (index_x == x || index_x == 1)
        ft_putchar('|');
    else if (index_x > 1)
        ft_putchar(' ');
}

void    square(int x, int y)
{
    int    index_x;
    int    index_y;
    
    index_y = y;
    if (x <= 0 || y <= 0)
        ft_putchar('e');
    else
    {
        while (index_y > 0)
        {
            index_x = x;
            while (index_x > 0)
            {
                if (index_y == y || index_y == 1)
                    ft_mierda1(index_x, x);
                if (index_y < y && index_y > 1)
                    ft_mierda2(index_x, x);
                index_x--;
            }
            index_y--;
            ft_putchar('\n');
        }
    }
}

/* Variante : A B B C
              B     B
              C B B A */

              