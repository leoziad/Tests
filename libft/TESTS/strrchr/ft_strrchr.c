/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:38:41 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/07 11:49:22 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_conststrlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char			*ft_strrchr(const char *s, int c)
{
	int		len;
	int		count;
	
	len = ft_conststrlen(s);
	count = 0;
	while (*s)
		s++;
	while (count < len)
	{
		if (*s == c)
			return ((char*)s);
		s--;
		count++;
	}
	if (*s == c)
		return ((char*)s);
	return (NULL);
}
