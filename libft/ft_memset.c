/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:31:28 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:52:18 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	unsigned char			*st;
	int						i;

	st = str;
	i = 0;
	while (i != n)
	{
		st[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*
int main()
{
	int a[3]; 
	int b[3];
	a[0] = 12; 
	b[0] = 12;
	b[1] = 1;
	b[2] = 3;
	a[1]= 1;
	a[2] = 3;
	memset(a, 'A', 2);
	ft_memset(b, 'A', 2);
	printf("%d %d", b[0], a[0]);
}
*/
