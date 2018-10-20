/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:07:21 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/09 16:30:02 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0) && (nb <= 12))
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
