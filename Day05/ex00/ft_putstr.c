/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:27:04 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/11 14:19:21 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int placen;

	placen = 0;
	while (str[placen] != '\0')
	{
		ft_putchar(str[placen]);
		placen++;
	}
}
