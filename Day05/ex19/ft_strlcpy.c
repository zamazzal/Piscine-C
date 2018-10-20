/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 16:42:42 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/17 12:00:48 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		srcl;
	unsigned int		x;

	srcl = 0;
	while (src[srcl] != '\0')
	{
		srcl++;
	}
	x = 0;
	while ((src[x] != '\0') && (x + 1 < size))
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (srcl);
}
