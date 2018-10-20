/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:28:57 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/06 14:50:16 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_number(char c)
{
	if ((int)c >= 48 && (int)c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

int		tonbr(char c)
{
	return ((int)c - 48);
}

int		ft_atoi(char *str)
{
	int		placen;
	int		rzlt;
	int		signe;

	signe = 1;
	placen = 0;
	if (str[0] == '+')
		placen = 1;
	else if (str[0] == '-')
	{
		placen = 1;
		signe = -1;
	}
	rzlt = 0;
	while (is_number(str[placen]))
	{
		rzlt = rzlt + tonbr(str[placen]);
		if (is_number(str[placen + 1]))
		{
			rzlt = rzlt * 10;
		}
		placen++;
	}
	return (rzlt * signe);
}
