/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:09:59 by lzylberm          #+#    #+#             */
/*   Updated: 2021/05/12 18:02:55 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	index;

	if (dest == NULL || src == NULL)
		return (0);
	if (dstsize > 0)
	{
		index = 0;
		while (src[index] != '\0' && index < dstsize - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (ft_strlen((char *)src));
}

static int	ft_trim_line(char **str, char **line)
{
	char	*tmp;
	int		index;

	index = 0;
	while ((*str)[index] != '\n' && (*str)[index] != '\0')
		index++;
	if ((*str)[index] == '\n')
	{
		*line = ft_substr(*str, 0, index);
		tmp = ft_strdup(&(*str)[index + 1]);
		free (*str);
		*str = tmp;
	}
	else
	{
		*line = ft_strdup(*str);
		*str = NULL;
		free (*str);
		return (0);
	}
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*l_tab[256];
	char		buff[BUFFER_SIZE + 1];
	int			rd_ret;
	char		*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	rd_ret = read(fd, buff, BUFFER_SIZE);
	while (rd_ret > 0)
	{
		buff[rd_ret] = '\0';
		if (l_tab[fd] == NULL)
			l_tab[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(l_tab[fd], buff);
			free (l_tab[fd]);
			l_tab[fd] = tmp;
		}
		if (ft_strchr(l_tab[fd], '\n'))
			break ;
		rd_ret = read(fd, buff, BUFFER_SIZE);
	}
	if (rd_ret < 0)
		return (-1);
	if (rd_ret == 0 && l_tab[fd] == NULL)
	{
		*line = ft_strdup("\0");
		return (0);
	}
	else
		return (ft_trim_line(&l_tab[fd], line));
}
