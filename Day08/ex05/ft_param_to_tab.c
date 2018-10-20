/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:08:12 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/20 17:49:02 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char		*ft_strdup(char *src)
{
	char	*src2;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[i])
	{
		++size;
		++i;
	}
	src2 = malloc(sizeof(char) * size);
	if (src2 == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}

int			ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			pos;
	t_stock_par	*params;

	if (!(params = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	pos = 0;
	while (pos < ac)
	{
		params[pos].size_param = ft_strlen(av[pos]);
		params[pos].str = av[pos];
		params[pos].copy = ft_strdup(av[pos]);
		params[pos].tab = ft_split_whitespaces(av[pos]);
		++pos;
	}
	params[pos].str = 0;
	return (params);
}
