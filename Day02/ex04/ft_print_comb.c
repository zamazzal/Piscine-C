/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:03:13 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/12 15:03:32 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		msgs(char a, char b, char c)
{
	if ((a != b) && (a != c))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	return (0);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				msgs(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
