/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:37:26 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/18 11:08:17 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		x;
	int		y;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	ptr = (char *)malloc(sizeof(char) * x + 1);
	y = 0;
	while (y < x)
	{
		ptr[y] = src[y];
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}
