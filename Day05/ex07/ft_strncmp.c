/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:39:46 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/17 11:36:28 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				result;
	unsigned int	placen;

	placen = 0;
	result = 0;
	while (placen < n)
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
