char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		while (src[index] != '\0')
		{	
			if(index == n)
				break;
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		index++;
	}
	return(dest);
}

