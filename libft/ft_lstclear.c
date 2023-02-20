/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:05:24 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:01:40 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*q;
	t_list	*p;

	q = *lst;
	if (!*lst)
		return ;
	while (q->next != NULL)
	{
		p = q->next;
		ft_lstdelone(q, del);
		q = p;
	}
	ft_lstdelone(q, del);
	*lst = NULL;
}
/*
#include <stdio.h>
int main(void)
{
	int i = 0;
	t_list *l = ft_lstnew(malloc(1));
	while (i++ != 10)
		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
	ft_lstclear(&l, free);
	printf("%d, %p\n", l == NULL, l);
}*/