/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaez-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:49:45 by msaez-lo          #+#    #+#             */
/*   Updated: 2022/10/22 13:59:04 by msaez-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	numb_digits(int n)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		a++;
		n = -1 * n;
	}
	if (n >= 1000000000)
		return (10 + a);
	while (ft_recursive_power(10, i) <= n)
		i++;
	i = i + a;
	return (i);
}

char	*int_min(char *ret, int i)
{
	int	n;

	i--;
	ret[0] = '-';
	ret[1] = '2';
	n = 147483648;
	while (ret[i] == 0 && i != -1)
	{
		ret[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ret;

	i = numb_digits(n);
	ret = (char *)ft_calloc((i + 1), sizeof(char));
	if (!ret)
		return (NULL);
	if (n == -2147483648)
		return (int_min(ret, i));
	if (n < 0)
	{
		ret[0] = '-';
		n = -1 * n;
	}
	i--;
	while (ret[i] == 0 && i != 0)
	{
		ret[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (ret[0] != '-')
		ret[0] = n % 10 + '0';
	return (ret);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(0)[0]);
}*/