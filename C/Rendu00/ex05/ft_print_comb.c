#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] !='\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void ft_print_comb(void)
{
	int indexA;
	int indexB;
	int indexC;
	char *nbr;

	nbr = "0123456789";
	indexA = 0;
	indexB = 1;
	indexC = 2;
	while(indexA != 7 || indexB != 8 || indexC != 9)
	{
		if(indexC == 10)
		{
			indexB++;
			indexC = indexB + 1;
		}
		if(indexB == 9)
		{
			indexA++;
			indexB = indexA + 1;
			indexC = indexB + 1;
		}
		else
		{
			ft_putchar(nbr[indexA]);
			ft_putchar(nbr[indexB]);
			ft_putchar(nbr[indexC]);
			ft_putstr(", ");
			indexC++;
		}
	}
	ft_putstr("789");
}
