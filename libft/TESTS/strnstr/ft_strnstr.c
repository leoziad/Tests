/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:50:27 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/14 13:08:27 by lzylberm         ###   ########.fr       */
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

char					*ft_strnstr(const char *str, const char *to_find, unsigned int len)
{
	unsigned int		i_str;
	unsigned int		i_find;

	if (ft_conststrlen(to_find) == 0)
		return ((char *)str);
	i_str = 0;
	i_find = 0;
	while (str[i_str] != '\0' && i_str < len)
	{
		while ((to_find[i_find] == str[i_str + i_find]) && (i_str + i_find) < len)
		{
			if (i_find == ft_conststrlen(to_find) - 1 || i_find == len)
				return ((char *)&str[i_str]);
			i_find++;
		}
		i_find = 0;
		i_str++;
	}
	return (0);
}
