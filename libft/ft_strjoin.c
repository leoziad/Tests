/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:40:24 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/24 16:10:09 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	char				*ptr;
	unsigned int		index;
	unsigned int		s1_len;
	unsigned int		s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	index = 0;
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	str = ft_strnew(s1_len + s2_len);
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (index < s1_len)
	{
		*str = *s1;
		str++;
		s1++;
		index++;
	}
	index = 0;
	while (index < s2_len)
	{
		*str = *s2;
		str++;
		s2++;
		index++;
	}
	return (ptr);
}
