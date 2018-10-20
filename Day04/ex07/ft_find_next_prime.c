/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:11:20 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/08 17:24:57 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int testeur;

	testeur = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (testeur <= nb / 2)
	{
		if (nb % testeur == 0)
		{
			return (0);
		}
		testeur++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
