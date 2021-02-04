#include <stddef.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size - 1)
		{	
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	return(ft_strlen(src));
}

