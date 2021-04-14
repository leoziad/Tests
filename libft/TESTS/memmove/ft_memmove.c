/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:37:00 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/14 12:34:14 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, unsigned int len)
{
	unsigned int	index;
	void			*ptr;

	index = 0;
	ptr = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (index < len && len != 0)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		index++;
	}
	return (ptr);
}
