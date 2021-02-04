int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		if (s1[index] == s2[index] && index == n - 1)
			return(0);
		else if (s1[index] == s2[index])
			index++;
		else if (s1[index] < s2[index])
			return(-1);
		else
			return(1);
        	
    	}
	if (s1[index] == s2[index])
		return(0);
	else
		return(-1);
}

