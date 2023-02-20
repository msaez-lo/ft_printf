/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:05:45 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:16:20 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*r;

	i = ft_strlen(s1);
	r = (char *)malloc((i + 1) * sizeof(char));
	if (!r)
		return (NULL);
	i = -1;
	while (s1[++i])
		r[i] = s1[i];
	r[i] = '\0';
	return (r);
}
/*
int main()
{
	char *r;
	char *s;
	r = "coucou";
	s = ft_strdup(r);
	printf("%d, %s", ft_strlen(r), s);
}*/
