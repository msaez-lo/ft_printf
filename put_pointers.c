/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pointers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:33:25 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 21:02:35 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	wr_num_hex_p(uintptr_t c)
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
		s = c + '0';
		s = s + 97 - 48;
		write(1, &s, 1);
		a++;
	}
	return (a);
}

int	conv_hex_p(uintptr_t n)
{
	int	a;

	a = 0;
	if (n / 16 != 0)
	{
		a = a + conv_hex_p(n / 16);
		a = a + conv_hex_p(n % 16);
	}	
	else
		a = a + wr_num_hex_p(n);
	return (a);
}

int	put_pointers(void *p)
{
	int	a;

	a = 0;
	if (p == NULL)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		a = 2;
		a = a + conv_hex_p((uintptr_t)p);
	}
	return (a);
}
/*
int main()
{
	char c;
	void *p;
	p = &c;
	put_pointers(p);
	printf("\n%p\n", p);
}*/
