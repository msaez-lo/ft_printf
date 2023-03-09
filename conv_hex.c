/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:35:07 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 23:06:40 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	sav_lines(int M, unsigned int c, int a)
{
	char	s;

	if (M == 0)
	{
		s = c + '0' + 65 - 48;
		write(1, &s, 1);
		a++;
	}
	else
	{
		s = c + '0' + 97 - 48;
		write(1, &s, 1);
		a++;
	}
	return (a);
}

int	wr_num_hex(unsigned int c, int M)
{
	char	s;
	int		a;

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
		a = sav_lines(M, c, a);
	}
	return (a);
}

int	conv_hex(unsigned int n, int M)
{
	unsigned int	e;
	int				a;

	e = 1;
	a = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (e <= n && e < 268435456)
		e = 16 * e;
	if (e < 268435456)
		e = e / 16;
	while (e != 0)
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

	l = 16;
	conv_hex(l, 0);
	printf("\n%x", l);
	//printf("\nlinea:%d, %d",conv_hex(l,1), printf("%x", l));
	//printf("%x", l);
}*/
