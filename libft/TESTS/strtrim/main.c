#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char *s1 = "  1?!Un deux ? 1 deux ! Test micro !!";
	printf("Expected result = Un deux ? 1 deux ! Test micro\n");
	char *ret = ft_strtrim(s1, " 1!?");
	printf("%s\n", ret);
	free (ret);
	return (0);
}
