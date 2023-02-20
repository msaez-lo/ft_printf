/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:54:27 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:16:47 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char				*ss;
	unsigned int		a;

	c = (char)c;
	a = 0;
	ss = (char *)s;
	while (a != ft_strlen(ss) && ss[a] != c)
		a++;
	if (ss[a] == c)
		return (ss + a);
	else
		return (NULL);
}
/*
int main()
{
	printf("%s\n",ft_strchr("hola beunas", 's'));
}*/
