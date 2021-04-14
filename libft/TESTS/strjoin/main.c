#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char	*strs[4];
	char	*ptr;
	
	strs[0] = "Grave";
	strs[1] = "envie";
	strs[2] = "de";
	strs[3] = "crever !";
	ptr = ft_strjoin(4, strs, "SEP");
	ft_putstr(ptr);
	free (ptr);

	return (0);
}
