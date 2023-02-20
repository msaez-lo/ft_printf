/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:51:17 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:51:16 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*sr;
	unsigned char	*ds;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	sr = (unsigned char *)src;
	ds = (unsigned char *)dst;
	while (i != n)
	{
		*(ds + i) = *(sr + i);
		i++;
	}
	return (dst);
}
/*
int main()
{
	int a[10];
	int b[10];
	int i = 0;
	while (i!= 10)
	{
		a[i] = i;
		if (i <= 5)
			b[i] = 100;
		i++;
	}
	ft_memcpy(NULL, NULL,  NULL);
	printf("%d\n%d", a[0], b[0]);
}
*/
