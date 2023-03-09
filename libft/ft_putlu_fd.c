/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlu_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:14:04 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 22:34:16 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	functfunct(unsigned int n, int fd, int *a)
{
	char	character;

	if (n / 10 != 0)
	{
		functfunct(n / 10, fd, a);
		functfunct(n % 10, fd, a);
	}	
	else
	{
		character = n + '0';
		write(fd, &character, 1);
		(*a)++;
	}
}
int	ft_putlu_fd(unsigned int n, int fd)
{
	int	a;

	a = 0;
	functfunct(n, fd, &a);
	return (a);
}
/*
int main()
{
	printf("\n%d\n", ft_putlu_fd(-1, 1));
}*/
