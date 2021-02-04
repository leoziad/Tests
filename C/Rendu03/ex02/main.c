#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	str[61];
	char	*src;

	src = " merde !";
	str[0] = 's';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'u';
	str[4] = 't';
	str[5] = ',';
	str[6] = ' ';
	str[7] = 'c';
	str[8] = 'o';
	str[9] = 'm';
	str[10] = 'm';
	str[11] = 'e';
	str[12] = 'n';
	str[13] = 't';
	str[14] = ' ';
	str[15] = 't';
	str[16] = 'u';
	str[17] = ' ';
	str[18] = 'v';
	str[19] = 'a';
	str[20] = 's';
	str[21] = ' ';
	str[22] = '?';
	str[23] = '\0';
	str[24] = '\0';
	str[25] = '\0';
	str[26] = '\0';
	str[27] = '\0';
	str[28] = '\0';
	str[29] = '\0';
	str[30] = '\0';
	str[31] = '\0';
	str[32] = '\0';
	str[33] = '\0';
	str[34] = '\0';
	str[35] = '\0';
	str[36] = '\0';
	str[37] = '\0';
	str[38] = '\0';
	ft_putstr(ft_strcat(str, src));
	return(0);
}

