/* Faire une fonction square 
** void square (int x, int y) qui affiche 
** un quadrilatère de x caractères de large 
** et y caractères de long.
** Ex 1: un "o" aux 4 angles, un "-" pour les
** côtés haut et bas, et un "|" pour les côtés
** gauche et droite. Doit fonctionner pour tous
** x et y > 0. Si x ou y ont une valeur in-
** valide, lindex_x fonction doit retourner "e". */ 

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

static void ft_mierda1(int index_x, int x)
{
    if (index_x == x)
        ft_putchar('A');
    else if (index_x > 1)
        ft_putchar('B');
        if (index_x == 1)
        ft_putchar('C');
}

static void ft_mierda2(int index_x, int x)
{
    if (index_x == x || index_x == 1)
        ft_putchar('B');
    else if (index_x > 1)
        ft_putchar(' ');
}

static void ft_mierda3(int index_x, int x)
{
    if (index_x == x)
        ft_putchar('C');
    else if (index_x > 1)
        ft_putchar('B');
        if (index_x == 1)
        ft_putchar('A');
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
                if (index_y == y)
                    ft_mierda1(index_x, x);
                if (index_y < y && index_y > 1)
                    ft_mierda2(index_x, x);
                if (index_y == 1)
                    ft_mierda3(index_x, x);
                index_x--;
            }
            index_y--;
            ft_putchar('\n');
        }
    }
}

int     main()
{
    square(10, 10);
    return(0);
}

