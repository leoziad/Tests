int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{	
		if (str[index] >= 'a' && str[index] <= 'z')
		       index++;
		else
			return(0);
	}
	return(1);
}	
