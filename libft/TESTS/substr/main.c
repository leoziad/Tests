#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char *str = "i just want this part #############";
	size_t size = 22;
	char *ret = ft_substr(str, 0, size);

	printf("%s\n", ret);
	free (ret);
	return (0);
}
