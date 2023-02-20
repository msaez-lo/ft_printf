/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:56:26 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:55:54 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i] && (i < n - 1))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <string.h>
int main()
{
    char s1[] = "holwaa";
    char s2[] = "holaaa";
    printf("%d\n",strncmp(s1,s2,3));
    char d1[] = "holwaa";
    char d2[] = "holaaa";
    printf("%d",ft_strncmp(d1,d2,3));
}
*/
