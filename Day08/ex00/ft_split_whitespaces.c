/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 22:17:35 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/20 15:46:01 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		l_a(char *str)
{
	int x;
	int allsize;

	x = 0;
	allsize = 0;
	while (str[x] != '\0')
	{
		if ((x == 0) && ((str[x] >= 33) && (str[x] <= 126)))
			allsize = 1;
		if (((str[x] == '\t') || (str[x] == '\n') || (str[x] == 32))
				&& ((str[x + 1] != '\t') && (str[x + 1] != '\n')
					&& (str[x + 1] != 32) && (str[x + 1] != '\0')))
			allsize++;
		x++;
	}
	return (allsize);
}

int		*l_b(int *score, char *str)
{
	int y;
	int contor;
	int b;

	b = 0;
	y = 0;
	contor = 0;
	while (str[y] != '\0')
	{
		if (((str[y] == '\t') || (str[y] == '\n') || (str[y] == 32))
				&& ((str[y - 1] >= 33) && (str[y - 1] <= 126)))
		{
			score[b] = contor + 1;
			contor = 0;
			b++;
		}
		else if (((str[y + 1] >= 33) && (str[y + 1] <= 126))
				&& ((str[y] == '\t') || (str[y] == '\n') || (str[y] == 32)))
			contor = 0;
		contor++;
		y++;
	}
	if ((str[y - 1] >= 33) && (str[y - 1] <= 126))
		score[b] = contor + 1;
	return (score);
}

char	**plain(char **ptr, char *str)
{
	int f;
	int m;
	int g;

	f = 0;
	m = 0;
	g = 0;
	while (str[f] != '\0')
	{
		if (((str[f] == '\t') || (str[f] == '\n') || (str[f] == 32))
				&& ((str[f - 1] >= 33) && (str[f - 1] <= 126)))
		{
			ptr[m][g] = '\0';
			m++;
			g = 0;
		}
		else if ((str[f] != '\t') && (str[f] != '\n') && (str[f] != 32))
			ptr[m][g++] = str[f];
		f++;
	}
	if (g > 0)
		ptr[m][g] = '\0';
	return (ptr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ptr;
	int		*score;
	int		i;
	int		allsize;

	score = 0;
	allsize = l_a(str);
	if (allsize > 0)
		score = (int *)malloc(sizeof(int) * (allsize + 1));
	l_b(score, str);
	ptr = (char**)malloc(sizeof(char*) * (allsize + 1));
	i = 0;
	while (i < allsize)
	{
		if (score[i] > 0)
		{
			ptr[i] = (char*)malloc(sizeof(char) * score[i]);
			i++;
		}
		else
			i++;
	}
	ptr[i] = 0;
	return (plain(ptr, str));
}
