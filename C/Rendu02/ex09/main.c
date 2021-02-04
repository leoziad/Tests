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

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[61];

	str[0] = 's';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'U';
	str[4] = 't';
	str[5] = ',';
	str[6] = ' ';
	str[7] = 'c';
	str[8] = 'o';
	str[9] = 'm';
	str[10] = 'm';
	str[11] = 'e';
	str[12] = 'n';
	str[13] = 'T';
	str[14] = ' ';
	str[15] = 'T';
	str[16] = 'u';
	str[17] = ' ';
	str[18] = 'v';
	str[19] = 'a';
	str[20] = 's';
	str[21] = ' ';
	str[22] = '?';
	str[23] = ' ';
	str[24] = '4';
	str[25] = '2';
	str[26] = 'M';
	str[27] = 'o';
	str[28] = 't';
	str[29] = 's';
	str[30] = ' ';
	str[31] = 'q';
	str[32] = 'u';
	str[33] = 'a';
	str[34] = 'r';
	str[35] = 'a';
	str[36] = 'n';
	str[37] = 't';
	str[38] = 'e';
	str[39] = '-';
	str[40] = 'd';
	str[41] = 'e';
	str[42] = 'u';
	str[43] = 'x';
	str[44] = ';';
	str[45] = ' ';
	str[46] = 'c';
	str[47] = 'i';
	str[48] = 'n';
	str[49] = 'q';
	str[50] = 'u';
	str[51] = 'a';
	str[52] = 'n';
	str[53] = 't';
	str[54] = 'e';
	str[55] = '+';
	str[56] = 'e';
	str[57] = 'T';
	str[58] = '+';
	str[59] = 'u';
	str[60] = 'n';
	ft_putstr(ft_strcapitalize(str));
	return(0);
}

