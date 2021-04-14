#include "libft.h"

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

int		main(void)
{
	char	*s1 = "my favorite animal is";
	char	*s2 = " ";
	char	*s3 = "the nyancat";
	char	*tmp  = ft_strjoin(s1, s2);
	char	*res  = ft_strjoin(tmp, s3);
	free (tmp);
	ft_putstr(res);
	free (res);

	return (0);
}
