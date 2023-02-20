/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:52:46 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/09 22:25:18 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*q;

	q = (t_list *)malloc(sizeof(t_list));
	if (!q)
		return (NULL);
	q->content = content;
	q->next = NULL;
	return (q);
}
/*
int		main(void)
{
	char	str[] = "lorem ipsum dolor sit";
	t_list	*elem;
	elem = ft_lstnew((void *)str);
	printf("\n%s\n", elem->content);
}
*/
