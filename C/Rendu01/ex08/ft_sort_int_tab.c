void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int index_a;
	int index_b;

	index_a = 0;
	index_b = 1;
	while (index_a < size - 1)
	{
		while (index_b < size)
		{
			if (tab[index_a] > tab[index_b])
			{
				ft_swap(&tab[index_a], &tab[index_b]);
				index_b = index_a;

			}
			index_b++;
		}
		index_a++;
		index_b = index_a;
	}
}

