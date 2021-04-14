/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:27:02 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/14 16:43:16 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int		ft_conststrlen(const char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int		index;
	char				*ptr;
	char				*substr;

	if (s == NULL)
		return (NULL);
	index = start;
	if (start > (unsigned int)ft_conststrlen(s))
	{
		ptr = malloc(1);
		*ptr = '\0';
		return (ptr);
	}
	if ((ptr = malloc(sizeof(*s) * len + 1)) == NULL)
		return (NULL);
	substr = ptr;
	while (*s && index < (start + len))
	{
		*ptr = s[index];
		ptr++;
		index++;
	}
	*ptr = '\0';
	return (substr);
}

static int		ft_check_set(char const *str, char const *charset)
{
	while (*charset)
	{
		if (*str == *charset++)
			return (1);
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char const		*ptr;
	int				index;
	int				start;
	int				end;

	if (s1 == NULL)
		return (NULL);
	ptr = s1;
	index = 0;
	while (ft_check_set(s1, set))
	{
		s1++;
		index++;
	}
	start = index;
	printf("start = %d\n", start);
	while (*s1 != '\0')
	{
		s1++;
		index++;
	}
	s1--;
	index--;
	while (ft_check_set(s1, set))
	{
		s1--;
		index--;
	}
	end = index + 1;
	printf("end = %d\n", end);
	return (ft_substr(ptr, start, (end - start)));
}


