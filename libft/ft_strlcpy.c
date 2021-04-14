/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:24:26 by lzylberm          #+#    #+#             */
/*   Updated: 2021/03/08 09:14:50 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	int				src_len;

	src_len = 0;
	index = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (src[index] != '\0' && index < size - 1)
	{
		if (index < size - 1 && size > 0)
			dest[index] = src[index];
		index++;
	}
	if (size > 0)
		dest[index] = '\0';
	return (src_len);
}
