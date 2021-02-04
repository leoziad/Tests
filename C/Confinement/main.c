#include <unistd.h>

void ft_putchar(char c)
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

int     ft_strlen(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return(index);
}

void    ft_swap(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

char    *ft_strrev(char *str)
{
    int tmp2;
    int index;
    int *a;
    int *b;

    tmp2 = 0;
    ft_strlen(str);
    index = ft_strlen(str);
    while (tmp2 < index)
    {
        index--;
        *a = str[tmp2];
        *b = str[index];
        ft_swap(*a, *b);
        tmp2++;
    }
    return(str);
}

main()
{
    char *str;
    
    *str = *ft_strrev("0123456789");
    ft_putstr(str);
    return(0);
}