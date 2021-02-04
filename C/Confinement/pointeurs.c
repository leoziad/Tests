void     ft_ft(int *nbr)
{
    *nbr = 42;
}

// nbr = le pointeur ; *nbr = contenu du pointeur //

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

// on peut pointer sur un pointeur qui pointe sur un pointeur etc. //

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a / *b;
    *b = *a % *b;
    *a = tmp;
}

void    ft_swap(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}