/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:48:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/03 18:45:02 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		print_0_nbr(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
	return (0);
}

void	print_nbr(int c1, int c2)
{
	print_0_nbr(c1);
	ft_putchar(' ');
	print_0_nbr(c2);
	if (c1 != 98 || c2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
			{
				print_nbr(a, b);
			}
			b++;
		}
		a++;
	}
}
