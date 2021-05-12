/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:24:04 by lzylberm          #+#    #+#             */
/*   Updated: 2021/05/12 18:08:08 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strnew(unsigned int size)
{
	unsigned int	index;
	char			*result;

	index = 0;
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	while (index <= size)
	{
		result[index] = '\0';
		index++;
	}
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		index;
	int		s1_len;
	int		s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	index = 0;
	str = ft_strnew(s1_len + s2_len);
	if (str == NULL)
		return (NULL);
	while (index < s1_len)
	{
		str[index] = s1[index];
		index++;
	}
	while (index < s1_len + s2_len)
	{
		str[index] = s2[index - s1_len];
		index++;
	}
	return (str);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	if (src == NULL)
		return (NULL);
	ptr = ft_strnew(ft_strlen(src));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, src, (ft_strlen(src) + 1));
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*substr;

	if (s == NULL)
		return (NULL);
	index = 0;
	if ((int)start > (int)ft_strlen((char *)s))
	{
		substr = ft_strnew(0);
		return (substr);
	}
	else if (len > (ft_strlen((char *)s) - start))
	{
		substr = ft_strnew((ft_strlen((char *)s) - start));
	}
	else
		substr = ft_strnew(len);
	if (substr == NULL)
		return (NULL);
	while (s[start + index] != '\0' && index < len)
	{
		substr[index] = s[start + index];
		index++;
	}
	return (substr);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
