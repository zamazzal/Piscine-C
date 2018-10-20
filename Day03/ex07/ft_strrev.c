/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:09:45 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/06 10:44:16 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		placen;

	placen = 0;
	while (str[placen] != '\0')
	{
		placen++;
	}
	return (placen);
}

char	*ft_strrev(char *str)
{
	int		placea;
	int		placez;
	char	backup;

	placea = 0;
	placez = ft_strlen(str);
	while (placea < (placez / 2))
	{
		backup = str[placea];
		str[placea] = str[placez - 1 - placea];
		str[placez - 1 - placea] = backup;
		placea++;
	}
	return (str);
}
