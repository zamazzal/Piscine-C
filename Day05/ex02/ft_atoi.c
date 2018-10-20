/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:05:21 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/17 16:12:57 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		placen;
	int		result;
	int		signe;

	signe = 1;
	placen = 0;
	result = 0;
	while (str[placen] == 32)
		placen++;
	if (str[placen] == '-')
	{
		placen++;
		signe = -1;
	}
	else if (str[placen] == '+')
		placen++;
	while ((str[placen] >= '0') && (str[placen] <= '9'))
	{
		result = result + (str[placen] - 48);
		if ((str[placen + 1] >= '0') && (str[placen + 1] <= '9'))
			result = result * 10;
		placen++;
	}
	return (result * signe);
}
