/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:28:12 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:57:57 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	size_t	x;

	x = count * size;
	if (count != 0 && size != 0 && x / count != size)
		return (NULL);
	r = malloc(x);
	if (!r)
		return (NULL);
	ft_bzero(r, x);
	return (r);
}
/*
int main()
{
	printf("%d", 5 / 0);
}*/