/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:55:57 by lzylberm          #+#    #+#             */
/*   Updated: 2021/03/08 17:47:44 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i_dest;
	unsigned int	i_src;
	unsigned int	total_lenght;

	total_lenght = (ft_strlen(src) + ft_strlen(dest));
	i_dest = ft_strlen(dest);
	i_src = 0;
	while (src[i_src] != '\0' && i_dest < size - 1)
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	dest[i_dest] = '\0';
	if (ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	else
		return (total_lenght);
}
