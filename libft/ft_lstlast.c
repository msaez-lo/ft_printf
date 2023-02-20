/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:20:26 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:01:06 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*q;

	if (lst == NULL)
		return (lst);
	q = lst;
	while (q->next != NULL)
		q = q->next;
	return (q);
}
