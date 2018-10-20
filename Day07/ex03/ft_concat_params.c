/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:18:11 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/20 13:19:19 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*fction(char *dest, int argc, char **argv)
{
	int		j;
	int		i;
	int		len;

	len = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			dest[len] = argv[i][j];
			j++;
			len++;
		}
		if (i != argc - 1)
		{
			dest[len] = '\n';
			len++;
		}
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	int		len;
	int		i;
	int		j;

	len = 0;
	i = 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++] != '\0')
			len++;
		i++;
	}
	dest = (char*)malloc(len * sizeof(char));
	if (dest)
	{
		dest = fction(dest, argc, argv);
		return (dest);
	}
	return (0);
}
