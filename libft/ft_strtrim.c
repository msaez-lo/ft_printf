/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:52:24 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:55:23 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	startr(const char	*s1, const char	*set)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (i != ft_strlen(s1))
	{
		j = 0;
		while ((set[j] != '\0') && (s1[i] != set[j]))
			j++;
		if (j == ft_strlen(set))
			return (s1[i]);
		i++;
	}
	return (0);
}

char	endr(const char	*s1, const char	*set)
{
	int		i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	while (i != -1)
	{
		j = 0;
		while ((set[j] != '\0') && (s1[i] != set[j]))
			j++;
		if (j == ft_strlen(set))
			return (s1[i]);
		i--;
	}
	return (0);
}

char	*iterate(unsigned int i, unsigned int j, char *r, char const *s1)
{
	unsigned int		k;

	k = 0;
	while (k != j - i + 1)
	{
		r[k] = s1[i + k];
		k++;
	}
	r[k] = '\0';
	return (r);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	unsigned int		j;
	char				*r;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		j = 0;
	while (s1[i] != startr(s1, set) && i != ft_strlen(s1))
		i++;
	while (s1[j] != endr(s1, set) && j != 0)
		j--;
	if (j == 0 && i == ft_strlen(s1))
		i = 1;
	r = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!r)
		return (NULL);
	return (iterate(i, j, r, s1));
}
