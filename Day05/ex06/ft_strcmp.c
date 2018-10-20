/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:39:46 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/15 16:49:00 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		placen;
	int		result;

	placen = 0;
	result = 0;
	while (result == 0)
	{
		if (s1[placen] != s2[placen])
		{
			result = s1[placen] - s2[placen];
			return (result);
		}
		if ((s1[placen] == '\0') && (s2[placen] == '\0'))
		{
			return (0);
		}
		placen++;
	}
	return (0);
}
