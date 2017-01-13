/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 16:44:10 by mmihail           #+#    #+#             */
/*   Updated: 2017/01/10 16:44:22 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rez;
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !f)
		return (NULL);
	tmp2 = f(lst);
	if ((rez = ft_lstnew(tmp2->content, tmp2->content_size)))
	{
		tmp = rez;
		lst = lst->next;
		while (lst)
		{
			tmp2 = f(lst);
			if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (rez);
}
