/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:32:34 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/10 23:08:57 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*first_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	void	*cont;

	if (!lst)
		return (NULL);
	cont = f(lst->content);
	ret = ft_lstnew(cont);
	if (!ret)
	{
		del(cont);
		return (NULL);
	}
	return (ret);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*cont;
	t_list	*ret;
	t_list	*new;

	ret = first_node(lst, f, del);
	if (!ret)
		return (NULL);
	new = ret;
	lst = lst->next;
	while (lst != NULL)
	{
		cont = f(lst->content);
		new->next = ft_lstnew(cont);
		if (!new->next)
		{
			del(cont);
			ft_lstclear(&ret, del);
			return (NULL);
		}
		lst = lst->next;
		new = new->next;
	}
	return (ret);
}
