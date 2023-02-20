/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:37:05 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:56:06 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		i;
	size_t		j;

	if (!s)
		return (0);
	j = 0;
	i = ft_strlen(s) - start;
	if (i > len)
		i = len;
	if (start > ft_strlen(s))
		i = 0;
	subs = (char *)malloc(sizeof(char) * (1 + i));
	if (!subs)
		return (NULL);
	while (j != i && s[start + j])
	{
		subs[j] = s[start + j];
		j++;
	}
	subs[j] = '\0';
	return (subs);
}
/*
int main()
{
	const char *s = "hika";
	int start = 0;
	int len = 10000;
	printf(":%s:\n", ft_substr(s, start, len));
  //printf(":%d\n:", strcmp(ft_substr(s, start, len), ""));
}*/
