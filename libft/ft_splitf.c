/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:47:54 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 23:27:06 by msaez-lo         ###   ########.fr       */
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
			if (s[i + 1] && s[i + 1] != c)
			{
				if (i != 0)
					j++;
			}
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
	while ((s[i] != c || (s[i] == c && s[i + 1] == c)) && s[i + 1])
	{
		if (s[i] == c && s[i + 1] == c)
		{
			a = a + 2;
			i = i + 2;
		}
		else
		{
			a++;
			i++;
		}
	}
	if (i == (int)ft_strlen(s) - 1)
		a++;
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

int	save_lines(const char *r, int a, char c)
{
	if (r[a + 1] && r[a] == c && r[a + 1] != c)
		return (a + 1);
	while (r[a + 1] && r[a] == c && r[a + 1] == c)
		a = a + 2;
	return (a);
}

char	**ft_splitf(char const *s, char c)
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
		a = save_lines(s, a, c);
		ret[i] = ft_substr(s, a, count_letters(s, a, c));
		if (!ret[i])
		{
			freear(ret, i);
			return (0);
		}
		a = a + count_letters(s, a, c);
	}
	ret[i] = 0;
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_splitf("%%", '%')[0]);
	//printf("%c", 32:' ')
}*/
