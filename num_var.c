/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_var.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:27:21 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/02/28 21:27:23 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	num_var(char const *s)
{
	int		i;
	int		r;

	i = 0;
	r = 0;
	while (i < ft_strlen(s) - 1)
	{
		if (s[i] == '%')
		{
			if (s[i + 1] != 'c' && s[i + 1] != 's' && s[i + 1] != 'p'
				&& s[i + 1] != 'd' && s[i + 1] != 'i' && s[i + 1] != 'u'
				&& s[i + 1] != 'x' && s[i + 1] != 'X' && s[i + 1] != '%')
				return (-1);
			else
				r++;
			if (s[i + 1] == '%')
				i++;
		}
		i++;
	}
	if (i != ft_strlen(s) && s[ft_strlen(s) - 1] == '%')
		return (-1);
	else
		return (r);
}
/*
int main()
{
	printf("%d\n", num_var("%dfjds%ckf%"));
}*/