/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:40:24 by lzylberm          #+#    #+#             */
/*   Updated: 2021/03/19 09:33:49 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

int		ft_strslen(int size, char **strs)
{
	int		index;
	int		result;

	result = 0;
	index = 0;
	while (index < size)
	{
		result = result + ft_strlen(strs[index]);
		index++;
	}
	return (result);
}

char	*ft_strnew(int size)
{
	int		index;
	char	*result;

	index = 0;
	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	while (index < size)
	{
		result[index] = '\0';
		index++;
	}
	return (result);
}

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int		i_dest;
	int		i_src;
	int		sep_len;
	int		sep_index;

	sep_index = 0;
	sep_len = ft_strlen(sep);
	i_dest = ft_strlen(dest);
	i_src = 0;
	while (src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
	}
	while (sep[sep_index] != '\0')
	{
		dest[i_dest] = sep[sep_index];
		i_dest++;
		sep_index++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sl;
	int		index;

	if (size == 0)
		str = malloc(sizeof(char *));
	else
	{
		index = 0;
		sl = ft_strlen(sep);
		str = ft_strnew(ft_strslen(size, strs) + 1 + (sl * size));
		while (index < size)
		{
			ft_strcat(str, strs[index], sep);
			index++;
		}
		index = ((ft_strslen(size, strs) + 1) + (sl * size - 1) - sl);
		str[index] = '\0';
	}
	return (str);
}
