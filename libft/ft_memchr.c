/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:05:33 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:56:21 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	d;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *)s;
	d = (unsigned char)c;
	if (n == 0)
		return (0);
	while (i != n && (*(ch + i) != d))
		i++;
	if (i == n)
		return (0);
	return ((void *)ch + i);
}
/*
#include <string.h>
int main()
{
	const char *s = "hola buenos dias";
	int c = '\0';
	int n = 0;
	printf("%s\n", memchr(s, c ,n));
	printf("%s", ft_memchr(s,c,n));
}
*/