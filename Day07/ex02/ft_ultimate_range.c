/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:22:00 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/20 10:50:42 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		x;
	int		*backup;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	backup = (int*)malloc(sizeof(int) * (max - min));
	if (backup == 0)
	{
		*range = 0;
		return (0);
	}
	x = min;
	while (x < max)
	{
		backup[x - min] = x;
		x++;
	}
	*range = backup;
	return (max - min);
}
