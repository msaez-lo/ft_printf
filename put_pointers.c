/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pointers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:33:25 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/05 12:33:26 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	wr_num_hex_p(uintptr_t c)
{
	char	s;

	if (c <= 9)
	{
		s = c + '0';
		write(1, &s, 1);
	}
	else
	{
		c = c - 10;
		s = c + '0';
		s = s + 97 - 48;
		write(1, &s, 1);
	}
}

void	conv_hex_p(uintptr_t n)
{
	if (n / 16 != 0)
	{
		conv_hex_p(n / 16);
		conv_hex_p(n % 16);
	}	
	else
		wr_num_hex_p(n);
}

void    put_pointers(void *p)
{
	char character;
	
	if (p == NULL)
	{
		write(1, "0x0", 3);
		return;
	}
	else
	{
		write(1, "0x", 2);
		conv_hex_p((uintptr_t)p);
	}
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