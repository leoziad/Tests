#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	char	**ptr;

	ptr = ft_split("dMwTxJUGZkjJAw7rIqN3WFDpz07FzlppvpOQs", "");
	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);
	printf("%s\n", ptr[3]);
	printf("%s\n", ptr[4]);
	//printf("%s\n", ptr[5]);
	//printf("%s\n", ptr[6]);
	//printf("%s\n", ptr[7]);
	//printf("%s\n", ptr[8]);
	//printf("%s\n", ptr[9]);
	//printf("%s\n", ptr[10]);
	//printf("%s\n", ptr[11]);
	free (ptr);
	return (0);
}
