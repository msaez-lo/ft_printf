/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:23:36 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:52:30 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, int n)
{
	char	*st;
	int		i;

	st = (char *) s;
	i = 0;
	while (i != n)
	{
		st[i] = '\0';
		i++;
	}
}
/*
int main()
{
	char a[] = "hola buenos dias";
	char b[] = "hola buenos dias";
	ft_bzero(a, 4);
	bzero(b,4);
	printf("mi función:%s:\nla suya:%s:", a, b);
}
*/
