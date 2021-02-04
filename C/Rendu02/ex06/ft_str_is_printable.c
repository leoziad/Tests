int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{	
		if (str[index] >= 32)
		       index++;
		else
			return(0);
	}
	return(1);
}	
