/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:20:25 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:53:26 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len != 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char d[50] = "hola";
	char s[50] = "hol1";
	printf("%s", (char *)memcpy(d, s, 4));
}*/