/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:52:40 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/17 19:17:31 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int dl;
	int x;
	int y;

	x = 0;
	y = 0;
	dl = 0;
	while (to_find[dl] != '\0')
		dl++;
	if (dl == 0)
		return ((char *)str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y])
		{
			if (y == dl - 1)
				return ((char *)str + x);
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
