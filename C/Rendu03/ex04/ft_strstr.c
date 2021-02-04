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

char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;
	int	i_find;
	int	len;
	char	*nul;

	nul = "la po trouvay!";
	len = ft_strlen(to_find);
	i_str = 0;
	i_find = 0;
	while (to_find[i_find] != '\0')
	{
		if (str[i_str] == '\0')
			return(nul);
		else if (str[i_str] == to_find[i_find])	
			i_find++;
		else if (i_str > 0 && i_find > 0 && str[i_str] != to_find[i_find] && str[i_str - 1] == to_find[i_find - 1])
			{	
				i_find = 0;
				i_str--;
			}
		i_str++;
	}
	return(&str[i_str - len]);
}

