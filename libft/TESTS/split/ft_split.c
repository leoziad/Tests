/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 09:07:59 by lzylberm          #+#    #+#             */
/*   Updated: 2021/03/23 17:40:09 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char *str, char *charset)
{
	while (*charset)
	{
		if (*str == *charset++)
			return (1);
	}
	return (0);
}

int		ft_word_len(char *str, char *charset)
{
	int index;

	index = 0;
	while (str[index] != '\0' && (!ft_is_sep(str + index, charset)))
		index++;
	return (index);
}

int		ft_word_count(char *str, char *charset)
{
	int		len;
	int		word_count;

	word_count = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && ft_is_sep(str, charset))
			str++;
		len = ft_word_len(str, charset);
		str = str + len;
		if (len != 0)
			word_count++;
	}
	return (word_count);
}

char	*ft_strdup(char *src, int len)
{
	char	*dest;
	int		index;

	index = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (index < len)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		t_len;
	int		index_a;
	int		index_b;
	int		w_len;

	t_len = ft_word_count(str, charset);
	tab = malloc(sizeof(char *) * (t_len + 1));
	if (tab == NULL)
		return (NULL);
	index_a = 0;
	index_b = 0;
	while (index_b < t_len)
	{
		while (str[index_a] != '\0' && ft_is_sep(&str[index_a], charset))
			index_a++;
		w_len = ft_word_len(&str[index_a], charset);
		if ((tab[index_b] = ft_strdup(&str[index_a], w_len)) == NULL)
			return (NULL);
		index_a = index_a + w_len;
		index_b++;
	}
	tab[t_len] = NULL;
	return (tab);
}
