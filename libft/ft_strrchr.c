/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:15:28 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 14:13:00 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ss;

	ss = (char *)s;
	i = ft_strlen(ss);
	while (i != 0 && ss[i] != (char)c)
	{
		i--;
	}
	if (i == 0 && ss[0] != (char)c)
		return (0);
	else
		return (ss + i);
}
/*
int main()
{
	printf("%s, %d\n", ft_strrchr("teste", 1024 + 'e'), 1024 + 'e');
}*/
