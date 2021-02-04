int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{	
		if (str[index] >= '0' && str[index] <= '9')
		       index++;
		else
			return(0);
	}
	return(1);
}	
