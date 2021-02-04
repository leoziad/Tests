int	ft_char_is_alphanum(char c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return(1);      
	else
		return(0);
}
