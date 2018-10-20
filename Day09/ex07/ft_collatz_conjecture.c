/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:34:55 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/07 13:46:15 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
	{
		return (0);
	}
	if (base % 2 == 0)
	{
		base = base / 2;
	}
	else
	{
		base = base * 3 + 1;
	}
	return (ft_collatz_conjecture(base) + 1);
}
