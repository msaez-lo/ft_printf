/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:26:51 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/12/14 19:26:57 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	putvar(char c, va_list ptr)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(ptr, int), 1);
	if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(ptr, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg(ptr, char *), 1);
    if (c == 'x')
        conv_hex(va_arg(ptr, int), 1);
    if (c == 'X')
        conv_hex(va_arg(ptr, int), 0);
    if (c == 'u')
        ft_putlu_fd(va_arg(ptr, unsigned int), 1);
    if (c == 'p')
    	put_pointers(va_arg(ptr, void *));
}

int	ft_printf(char const *str, ...)
{
	char	**s;
	char	*r;
	int		i;
	va_list	ptr;

	i = 0;
	va_start(ptr, str);
	s = ft_splitf(str, '%');
	if (str[0] == '%' && str[1] != '%')
		i--;
	else
	{
		r = rm_perc(s[0]);
		ft_putstr_fd(r, 1);
		free(r);
	}
	while (i != num_var(str) && s[i + 1] != NULL)
	{
		r = rm_perc(s[i + 1]);
		putvar(r[0], ptr);
		if (ft_strlen(r) > 1)
		{
			ft_putstr_fd(++r, 1);
			free(--r);
		}
		else
			free(r);
		i++;
	}
	return (0);
}
/*
int main()
{
    unsigned int d = 4294967294;
    char c = 'n';
    char *s = "hola";
    void *p;
    p = s;
    //ft_putflt_fd(f, 1);
    //write(1,"\n", 1);
    //ft_printf("%c", c);
    //printf("%s\n", ft_splitf("%d", '%')[1]);
    //printf("%s", rm_perc(ft_splitf("%d", '%')[0]));
    //printf("hol%%, numero:%i\nun char:%c\nuna str:%s\n", d, c, s);
    ft_printf("hol%%, numero:%i\nun char:%c\nuna str:%s\n", d, c, s);
    //printf("%x", -4721738);
}*/
