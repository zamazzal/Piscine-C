/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:26:40 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/17 11:34:57 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		destl;
	unsigned int		srcl;
	int					rzlt;
	unsigned int		x;

	destl = 0;
	srcl = 0;
	rzlt = 0;
	while (dest[destl] != '\0')
		destl++;
	while (src[srcl] != '\0')
		srcl++;
	if (size <= destl)
		rzlt = srcl + size;
	else
		rzlt = srcl + destl;
	x = 0;
	while ((src[x] != '\0') && (destl + 1 < size))
	{
		dest[destl] = src[x];
		destl++;
		x++;
	}
	dest[destl] = '\0';
	return (rzlt);
}
