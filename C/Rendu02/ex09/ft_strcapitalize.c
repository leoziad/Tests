static int	ft_char_is_alphanum(char c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return(1);      
	else
		return(0);
}

static int	ft_char_is_lowercase(char c)
{

		if (c >= 'a' && c <= 'z')
		       return(1);
		else
			return(0);
}	

static int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		       return(1);
		else
			return(0);
}	

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{	
		if (ft_char_is_alphanum(str[index])) 
		{
		 	if (ft_char_is_lowercase(str[index]))	
				str[index] = str[index] - 32;
			while (ft_char_is_alphanum(str[index]))
			{
				index++;
				if (ft_char_is_uppercase(str[index]))
					str[index] = str[index] + 32;
			}
		}
		index++;
	}
	return(str);
}	
