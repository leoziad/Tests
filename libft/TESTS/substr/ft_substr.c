/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:23:11 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/14 16:24:49 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
