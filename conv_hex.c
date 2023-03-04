#include "ft_printf.h"

void	wr_num_hex(int c, int M)
{
	char	s;

	if (c <= 9)
	{
		s = c + '0';
		write(1, &s, 1);
	}
	else
	{
		c = c - 10;
		if (M == 0)
		{
			s = c + '0';
			s = s + 65 - 48;
			write(1, &s, 1);
		}
		else
		{
			s = c + '0';
			s = s + 97 - 48;
			write(1, &s, 1);
		}
	}
}
void	conv_hex(int n, int M)
{
	int e;
	int	i;

	e = 1;
	i = 0;
	while (e < n)
	{
		e = 16 * e;
		i++;
	}
	e = e / 16;
	while (--i != -1)
	{
		wr_num_hex(n / e, M);
		n = n % e;
		e = e / 16;
	}
}