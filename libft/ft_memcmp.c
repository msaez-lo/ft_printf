/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:18:48 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:50:15 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*r1;
	unsigned char	*r2;
	size_t			i;

	if (n == 0)
		return (0);
	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	i = 0;
	while ((i != n) && (*(r1 + i) == *(r2 + i)))
		i++;
	if (i == n)
		i--;
	return (*(r1 + i) - *(r2 + i));
}
/*
#include <string.h>
int main()
{
	printf("%d", memcmp("teste", "teste", 0));	
}*/