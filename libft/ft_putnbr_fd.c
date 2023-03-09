/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:22:22 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 21:01:21 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	max_num(int n, int fd, int *a)
{
	n = 147483648;
	write(fd, "-", 1);
	write(fd, "2", 1);
	*a = 2;
	return (n);
}

int	n_neg(int n, int fd, int *a)
{
	write(fd, "-", 1);
	n = -1 * n;
	*a = 1;
	return (n);
}

void	funcnbr(int n, int fd, int *a)
{
	char	character;

	if (n == -2147483648)
		n = max_num(n, fd, a);
	if (n < 0)
		n = n_neg(n, fd, a);
	if (n / 10 != 0)
	{
		funcnbr(n / 10, fd, a);
		funcnbr(n % 10, fd, a);
	}	
	else
	{
		character = n + '0';
		write(fd, &character, 1);
		(*a)++;
	}
}

int	ft_putnbr_fd(int n, int fd)
{
	int	a;

	a = 0;
	funcnbr(n, fd, &a);
	return (a);
}
/*	
int main()
{
	printf("\n%d\n", ft_putnbr_fd(-2147483648, 1));
}*/
