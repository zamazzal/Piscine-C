/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:09:19 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/08 16:16:15 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int testeur;

	testeur = 1;
	while (testeur <= nb)
	{
		if (testeur * testeur == nb)
		{
			return (testeur);
		}
		testeur++;
	}
	return (0);
}
