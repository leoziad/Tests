#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_square(int x, int y, int max_y)
{
    int         index_x;
    int         index_y;

    index_x = x;
    index_y = y;
    if (index_y == 0)
        return ;
    else
        print_square(x, y -1, max_y);
    while(index_x > 0)
    {
        if ((index_x == 1 || index_x == x) && (index_y == 1 || index_y == max_y))
            ft_putchar('o');
        else if ((index_x != 1 && index_x != x) && (index_y == 1 || index_y == max_y))
            ft_putchar('-');
        else if ((index_x == 1 || index_x == x) && (index_y != 1 && index_y != max_y))
            ft_putchar('|');
        else
            ft_putchar(' ');
        index_x--;
    }
    ft_putchar('\n');
}

void    square(int x, int y)
{
    print_square(x, y, y);
}

int     main()
{
    square(5, 3);
    return (0);
}