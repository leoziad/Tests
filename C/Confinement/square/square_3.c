#include <unistd.h>

/* void square(int x, int y) afficher un quadrilatere de x carracteres de large et de y caracteres de long pour x > 0 et y > 0.
'o' pour les angles, '-' pour les cotes hauts et bas, '|' pour les cotes droit et gauche. Si x ou y <= 0, la fonction ecrit simplement 'e'*/

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int     ft_atoi(char *str)
{
    int result;
    int index;
    int sign;

    result = 0;
    index = 0;
    sign = 1;
    while (str[index] != '\0')
    {
        if (ft_isdigit(str[index]) == 0)
        {
            if (str[index] == '-')
                sign *= -1;
            else if (str[index] == '+')
                ;
            else
                return (result);
        }
        else
            result = (result * 10) + (str[index] - 48);   
        index++;
    }
    return (result);
}

void    square(int x, int y)
{
    int index_x;
    int index_y;

    index_y = 1;
    if (x <= 0 || y <= 0)
        ft_putchar('e');
    else
        while (index_y <= y)
        {
            index_x = 1;
            while (index_x <= x)
            {
                if ((index_x == 1 || index_x == x) && (index_y == 1 || index_y == y))
                    ft_putchar('o');
                else if ((index_x != 1 && index_x != x) && (index_y == 1 || index_y == y))
                    ft_putchar('-');
                else if ((index_x == 1 || index_x == x) && (index_y != 1 && index_y != y))
                    ft_putchar('|');
                else
                    ft_putchar(' ');
                index_x++;
            }
            ft_putchar('\n');
            index_y++;
        }
}

int     main(int ac, char **av)
{
    (void)ac;
        square(ft_atoi(av[1]), ft_atoi(av[2]));
    return (0);
}