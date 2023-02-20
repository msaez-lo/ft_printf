/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:50:41 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:51:54 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = -1;
	while (++i != ft_strlen(s))
	{
		write(fd, &(s[i]), 1);
	}
}
/*
int main()
{
	char *s = "hola buenos dias, ¿Qué tal?";
	ft_putstr_fd(s, 1);
}
*/
