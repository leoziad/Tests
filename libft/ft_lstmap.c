/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzylberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:11:33 by lzylberm          #+#    #+#             */
/*   Updated: 2021/04/22 11:57:49 by lzylberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*newlst;
	t_list		*tmp;

	(void)del;
	newlst = ft_lstnew(lst->content);
	while (lst)
	{
		lst = lst->next;
		if (lst != NULL)
		{
			tmp = ft_lstnew(f(lst->content));
			ft_lstadd_back(&newlst, tmp);
		}
	}
	return (newlst);
}
