/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 19:07:02 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/16 19:07:29 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if ((nb < 0) && (nb > -2147483648))
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if ((nb >= 0) && (nb <= 9))
	{
		ft_putchar(nb + '0');
	}
	else if ((nb > 9) && (nb <= 2147483647))
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
}
