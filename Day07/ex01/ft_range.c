/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:14:02 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/19 22:32:30 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		x;
	int		*ptr;

	if (min < max)
	{
		x = 0;
		ptr = (int *)malloc(sizeof(int) * (max - min));
		while (min + x < max)
		{
			ptr[x] = min + x;
			x++;
		}
		return (ptr);
	}
	return (0);
}
