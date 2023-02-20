/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:54:06 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/07 13:13:10 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(s);
	i = 0;
	while (i != len)
	{
		(*f)(i, &(s[i]));
		i++;
	}
}
/*
void f(unsigned int n, char *a)
{
	*a = *a + 1;
}

int main()
{
	char *s = "abcdefg";
	ft_striteri(s, *f);
	printf("%s", s);
}
*/
