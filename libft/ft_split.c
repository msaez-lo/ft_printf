/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:01:07 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:52:42 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[0] == '\0')
		return (0);
	while (i != (int)ft_strlen(s))
	{
		if (s[i] == c)
		{
			if (i != 0)
				j++;
			while (i + 1 != (int)ft_strlen(s) && s[i + 1] == c)
				i++;
		}
		i++;
	}
	if (s[i - 1] != c)
		j++;
	return (j);
}

unsigned int	count_letters(char const *s, int i, char c)
{
	unsigned int	a;

	a = 0;
	while (s[i] != c && s[i])
	{
		a++;
		i++;
	}
	return (a);
}

void	freear(char **ret, int i)
{
	i--;
	while (i >= 0)
	{
		free(ret[i]);
		i--;
	}
	free(ret);
}

char	**save_lines(char **ret, int i)
{
	ret[i] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	a;
	int				i;
	char			**ret;

	if (!s)
		return (0);
	a = 0;
	i = -1;
	ret = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ret)
		return (0);
	while (++i != count_words(s, c))
	{
		while (s[a] == c)
			a++;
		ret[i] = ft_substr(s, a, count_letters(s, a, c));
		if (!ret[i])
		{
			freear(ret, i);
			return (0);
		}
		a = a + count_letters(s, a, c);
	}
	ret = save_lines(ret, i);
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_split("hello!", ' ')[0]);
	//printf("%c", 32:' ')
}*/
