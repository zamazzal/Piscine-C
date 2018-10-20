/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:02:58 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/07 15:40:33 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		index_of(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_rot42(char *str)
{
	char	*clear;
	char	*code;
	int		i;

	i = 0;
	clear = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	code = "qrstuvwxyzabcdefghijklmnopQRSTUVWXYZABCDEFGHIJKLMNOP";
	while (str[i] != '\0')
	{
		if (index_of(clear, str[i]) != -1)
		{
			str[i] = code[index_of(clear, str[i])];
			i++;
		}
	}
	return (str);
}
