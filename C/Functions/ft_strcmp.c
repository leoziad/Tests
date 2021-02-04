
int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0')
	{
        	if (s1[index] == s2[index])
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
