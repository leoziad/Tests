#include <stdio.h>
#include "libft.h"

char	*ft_strnew(int size)
{
	int		index;
	char	*result;

	index = 0;
	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	while (index < size)
	{
		result[index] = '\0';
		index++;
	}
	return (result);
}

int		ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_itoa(int n);

int		main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
