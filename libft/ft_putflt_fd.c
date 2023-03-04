/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putflt_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:16:22 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/04 13:16:25 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putflt_fd(float n, int fd)
{
    int i;
    int a;

    i = (int)n;
    ft_putnbr_fd(i, fd);
    write(fd, ".", 1);
    n = n - i;
    n = n * 10000000;
    i = (int) n;
    i = i / 10;
    if (i == 0)
    {
        a = -1;
        while(++a != 5)
            write(fd, "0", 1);
    }
    if (i < 0)
        i = i * -1;
    ft_putnbr_fd(i, fd);
}
