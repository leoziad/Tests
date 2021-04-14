/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:05:38 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/07 14:36:06 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strnew(int size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, unsigned int len);
int		ft_atoi(char *str);
char	**ft_split(char *str, char *charset);
void	*ft_memset(void *b, int c, unsigned int len);
void	*ft_memcpy(void *dest, void *src, unsigned int n);
void	*ft_memccpy(void *dest, void *src, int c, unsigned int n);
void	*ft_memmove(void *dst, void *src, unsigned int len);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_bzero(void *s, unsigned int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(unsigned int count, unsigned int size);
char	*ft_substr(char const *s, unsigned int start, unsigned int len);
#endif
