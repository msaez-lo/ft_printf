/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:41:32 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:54:13 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	rtn(int r, int size, int len_dest)
{
	if (r + size > len_dest + r)
		return (len_dest + r);
	else
		return (r + size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	c;
	unsigned int	r;

	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = ft_strlen(dest) + ft_strlen(src) + 1;
	len_dest = 0;
	r = 0;
	len_dest = ft_strlen(dest);
	r = ft_strlen(src);
	c = len_dest;
	if (size != 0)
	{
		while (src[c - len_dest] && c < size - 1)
		{
			dest[c] = src[c - len_dest];
			c++;
		}
	}
	dest[c] = '\0';
	if (size == 0)
		return (ft_strlen(src));
	return (rtn(r, size, len_dest));
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char *ds = "hola";
	char *sr = "buenaaaaaaaaaaaaaaa";
	printf("%d", strlcat(ds, sr, 0));
	printf("%s", ds);
}*/
