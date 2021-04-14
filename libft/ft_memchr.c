/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:59:46 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/14 12:41:45 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	c_cpy;
	unsigned int	index;
	
	c_cpy = c;
	index = 0;
	while (*(unsigned char *)s && index < n)
	{
		if (*(unsigned char *)s == c_cpy)
			return ((unsigned char *)s);
		s++;
		index++;
	}
	if (*(unsigned char *)s == '\0' && c == '\0')
		return ((unsigned char *)s);
	return (NULL);
}
