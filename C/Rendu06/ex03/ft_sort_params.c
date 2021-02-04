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

int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0')
	{
        	if (s1[index] == s2[index])
			index++;
		else if (s1[index] < s2[index])
			return(-1);
		else
			return(1);
        	
    	}
	if (s1[index] == s2[index])
		return(0);
	else
		return(-1);
}

static void	ft_str_swap(char **a, char **b)
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

static void	ft_sort_char_tab(char **tab, int size)
{
	int index_a;
	int index_b;

	index_a = 0;
	index_b = 1;
	while (index_a < size - 1)
	{
		while (index_b < size)
		{
			if (ft_strcmp(tab[index_a], tab[index_b]) == 1)
			{
				ft_str_swap(&tab[index_a], &tab[index_b]);
				index_b = index_a;

			}
			index_b++;
		}
		index_a++;
		index_b = index_a;
	}
}

int	main(int argc, char **argv)
{
	int	index;
	char	*tab[argc - 1];

	index = 0;
	while (index + 1 < argc)
	{
		tab[index] = argv[index + 1];
		index++;
	}
	ft_sort_char_tab(tab, argc - 1);
	index = 0;
	while (index < argc - 1)
	{
		ft_putstr(tab[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}

