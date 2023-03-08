/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:35:07 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/05 14:35:09 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	wr_num_hex(unsigned int c, int M)
{
	char	s;
	int	a;

	a = 0;
	if (c <= 9)
	{
		s = c + '0';
		write(1, &s, 1);
		a++;
	}
	else
	{
		c = c - 10;
		if (M == 0)
		{
			s = c + '0';
			s = s + 65 - 48;
			write(1, &s, 1);
			a++;
		}
		else
		{
			s = c + '0';
			s = s + 97 - 48;
			write(1, &s, 1);
			a++;
		}
	}
	return (a);
}

int	conv_hex(unsigned int n, int M)
{
	unsigned int	e;
	int	i;
	int	a;

	e = 1;
	i = 0;
	a = 0;
	while (e < n && e < 268435456)
	{
		e = 16 * e;
		i++;
	}
	if (e < 268435456)
		e = e / 16;
	while (--i != -1)
	{
		a = a + wr_num_hex(n / e, M);
		n = n % e;
		e = e / 16;
	}
	return (a);
}
/*
int main()
{
	unsigned int l;
	l = 42949;
	conv_hex(l,0);
	printf("%x", l);
}*/
