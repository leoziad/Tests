#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	index = 0;
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{	
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max); 
		if (*range == NULL)
			return (-1);
		else
			return (max - min);
	}
}
	
