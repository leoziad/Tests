int	ft_char_is_digit(char c);

int	ft_char_is_space(char c);

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	result;

	index = 0;
	result = 0;
	sign = 1;
	while ( ft_char_is_space(str[index]) || str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (ft_char_is_digit(str[index]))
		{
			result = (result * 10) + (str[index] - 48);
			index++;
		}
	result = result * sign;
	return(result);
}				
