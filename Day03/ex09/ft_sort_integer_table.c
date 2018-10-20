/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:52:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/07 09:21:31 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	placea;
	int	placeb;
	int	backup;

	placea = 0;
	while (placea < size)
	{
		placeb = placea + 1;
		while (placeb <= size)
		{
			if (tab[placea] > tab[placeb])
			{
				backup = tab[placea];
				tab[placea] = tab[placeb];
				tab[placeb] = backup;
			}
			placeb++;
		}
		placea++;
	}
}
