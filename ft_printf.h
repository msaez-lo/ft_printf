#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int     ft_printf(char const *str, ...);
int     num_var(char const *s);
char	*rm_perc(char const *str);

#endif