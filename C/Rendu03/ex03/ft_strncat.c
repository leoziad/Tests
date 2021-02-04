int     ft_strlen(char *str)
{
    int index;

    index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return(index);
}

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	unsigned int dest_len = ft_strlen(dest);
	unsigned int i;

        for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
        dest[dest_len + i] = '\0';

	return dest;
}


