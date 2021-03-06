/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:45:16 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/16 12:51:50 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 32) && (str[x] <= 127))
		{
			x++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
