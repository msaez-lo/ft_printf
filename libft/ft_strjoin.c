/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:13:54 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:54:32 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*r;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	r = (char *)malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)));
	if (!r)
		return (NULL);
	while (i != ft_strlen(s1))
	{
		r[i] = s1[i];
		i++;
	}
	while (j != ft_strlen(s2))
	{
		r[i + j] = s2[j];
		j++;
	}
	r[i + j] = '\0';
	return (r);
}
/*
int main()
{
	char *s1 = "tripouille";
	char *s2 = "42";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
