#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char *str = "  1?!Un deux ? 1 deux ! Test micro !!";
	char *ret = ft_substr(str, 5, 29);

	printf("%s\n", ret);
	free (ret);
	return (0);
}
