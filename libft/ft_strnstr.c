/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:51:45 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/11/09 19:54:08 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	save_lines1(const char *haystack, const char *needle, size_t len)
{
	if ((haystack == NULL || needle == NULL) && len == 0)
		return (0);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	cont;
	char			*haystack1;
	char			*needle1;

	haystack1 = (char *)haystack;
	needle1 = (char *)needle;
	if (save_lines1(haystack, needle, len) != 1)
		return (0);
	if (ft_strlen(needle) == 0 || haystack == needle)
		return (haystack1);
	cont = ft_strlen(needle1);
	i = 0;
	while (ft_strlen(haystack) != 0
		&& (haystack1[i + cont - 1] != '\0') && (i + cont <= len))
	{
		j = 0;
		while ((haystack1[i + j] == needle1[j]) && (j != cont))
			j++;
		if (j == cont)
			return (haystack1 + i);
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%s", ft_strnstr("abc", "abcdef", 2));
}*/