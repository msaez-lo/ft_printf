/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:30:28 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:00:51 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*q;

	if (lst == NULL)
		return (0);
	i = 1;
	q = lst;
	while (q->next != NULL)
	{
		q = q->next;
		i++;
	}
	return (i);
}
/*
int main()
{
	t_list hola;
	t_list hola1;
	int c = 1;
	hola.content = (void*)c;
	hola.next = &hola1;
	hola1.content = (void*)c;
	hola1.next = NULL;
	printf("%d", ft_lstsize(&hola));
}
*/
