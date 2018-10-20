/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:15:39 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/16 12:18:44 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 48) && (str[x] <= 57))
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
