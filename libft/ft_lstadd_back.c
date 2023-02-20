/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:31:25 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:01:20 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*q;

	if (*lst != NULL)
	{
		q = ft_lstlast(*lst);
		q->next = new;
	}
	else
		*lst = new;
}
/*
int main()
{
	t_list *l = NULL;
	t_list *p = ft_lstnew((void *)1);
	printf("%d, %p\n", p->next == NULL, p->next);
	printf("%d\n", l == NULL);
	ft_lstadd_back(&l, p);
	printf("%p, %p, %d\n", l, p, l == p);
	printf("%d, %p\n", (int)l->content, p->next);
}*/
