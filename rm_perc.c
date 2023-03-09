/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rm_perc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:52:13 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 21:02:06 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*save_line(int a, char *s, char const *str)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (b != a)
	{
		s[b] = str[i];
		if (str[i] == '%')
			i = i + 2;
		else
			i++;
		b++;
	}
	s[b] = '\0';
	return (s);
}

char	*rm_perc(char const *str)
{
	int		i;
	int		a;
	char	*s;

	i = 0;
	a = 0;
	while (i != (int)ft_strlen(str))
	{
		if (str[i] == '%' && str[i + 1] == '%')
			i = i + 2;
		else
			i++;
		a++;
	}
	s = (char *)malloc(sizeof(char) * (a + 1));
	if (!s)
		return (0);
	s = save_line(a, s, str);
	return (s);
}
/*
int main()
{
    char *str = "hola buenos %% dias %%que tal %%a";
    printf("%s", rm_perc(str));
}*/
