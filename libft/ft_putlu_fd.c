/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlu_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:14:04 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/05 12:14:07 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlu_fd(unsigned int n, int fd)
{
	char	character;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -1 * n;
	}
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}	
	else
	{
		character = n + '0';
		write(fd, &character, 1);
	}
}