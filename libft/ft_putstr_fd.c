/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:50:41 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 22:23:07 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	int		a;

	a = 0;
	i = -1;
	if (!s)
	{
		write(fd, "(null)", 6);
		a = 6;
	}
	else
	{
		while (++i != ft_strlen(s))
		{
			write(fd, &(s[i]), 1);
			a++;
		}
	}
	return (a);
}
/*
int main()
{
	ft_putstr_fd(NULL, 1);
}*/
