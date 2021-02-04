#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;
	int index;

	len = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		len++;
	}
	return(len);
}

