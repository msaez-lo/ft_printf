/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:56:15 by msaez-lo          #+#    #+#             */
/*   Updated: 2023/03/09 20:23:03 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(char const *str, ...);
int		num_var(char const *s);
char	*rm_perc(char const *str);
int		conv_hex(unsigned int n, int M);
int		put_pointers(void *p);
#endif
