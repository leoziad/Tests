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
