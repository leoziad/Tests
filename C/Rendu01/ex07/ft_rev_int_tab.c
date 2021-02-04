void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int rev_index;

	index = 0;
	rev_index = size - 1;
	while (index < rev_index)
	{
		ft_swap(&tab[index], &tab[rev_index]);
		//"ft_swap(tab + index, tab + rev_index)" si on veut éviter le référencement suivi d'un déréférencement//
		index++;
		rev_index--;
	}
}

