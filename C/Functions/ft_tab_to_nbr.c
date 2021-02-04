void	ft_rev_int_tab(int *tab, int size);

int	ft_tab_to_nbr(int *tab, int size)
{
	int		index;
	long int	result;

	index = 0;
	ft_rev_int_tab(tab, size);
	while (index < size)
	{
		result = (tab[index] + 48);
		index++;
		result = result + ((tab[index] + 48) * 10);
		index++;
		result = result + ((tab[index] + 48) * 100);
		index++;
		result = result + ((tab[index] + 48) * 1000);
		index++;
		result = result + ((tab[index] + 48) * 10000);
		index++;
		result = result + ((tab[index] + 48) * 100000);
		index++;
		result = result + ((tab[index] + 48) * 1000000);
		index++;
		result = result + ((tab[index] + 48) * 10000000);
		index++;
		result = result + ((tab[index] + 48) * 100000000);
		index++;
		result = result + ((tab[index] + 48) * 1000000000);
	}
	return(result);
}

