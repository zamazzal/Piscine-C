/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:50:42 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/06 18:08:16 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if ((hour <= 24) && (hour >= 00))
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	{
		if ((hour >= 00) && (hour < 11))
			printf("%d.00 A.M AND %d.00 A.M.\n", hour, (hour + 1));
		else if ((hour > 12) && (hour < 23))
			printf("%d.00 P.M AND %d.00 P.M.\n", hour % 12, (hour + 1) % 12);
		else if (hour == 11)
			printf("%d.00 A.M AND %d.00 P.M.\n", hour, hour + 1);
		else if (hour == 24)
			printf("%d.00 A.M AND %d.00 A.M.\n", hour % 12, (hour + 1) % 12);
		else if (hour == 12)
			printf("%d.00 P.M AND %d.00 P.M.\n", hour, (hour + 1) % 12);
		else if (hour == 23)
			printf("%d.00 P.M AND %d.00 A.M.\n", hour, (hour + 1) % 12);
	}
}
