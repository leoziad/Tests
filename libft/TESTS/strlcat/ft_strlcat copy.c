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

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int len_dest;
    unsigned int len_src;
    i = 0;
    len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    if (size <= len_dest)
        len_src += size;
    else
        len_src += len_dest;
    while (src[i] != '\0' && len_dest + 1 < size)
    {
        dest[len_dest] = src[i];
        len_dest++;
        i++;
    }
    dest[len_dest] = '\0';
    return (len_src);
}
