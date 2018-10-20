/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:39:52 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/09 16:00:53 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factor;

	if ((nb > 0) && (nb <= 12))
	{
		factor = nb - 1;
		while (factor > 0)
		{
			nb = (nb * factor);
			factor--;
		}
		return (nb);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (0);
}
