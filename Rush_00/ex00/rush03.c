/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:37:30 by magoumi           #+#    #+#             */
/*   Updated: 2018/10/22 00:48:46 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	draw(int cursorx, int cursory, int x, int y)
{
	if ((cursorx == 1 && cursory == 1) || (cursorx == 1 && cursory == y))
	{
		ft_putchar('A');
	}
	else if ((cursorx == x && cursory == 1) || (cursorx == x && cursory == y))
	{
		ft_putchar('C');
	}
	else if ((cursorx != 1 && cursorx != x) && (cursory == 1 || cursory == y))
	{
		ft_putchar('B');
	}
	else if ((cursorx == 1 || cursorx == x) && (cursory != 1 && cursory != y))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int cursorx;
	int cursory;

	if (x < 1 || y < 1)
		return ;
	cursory = 1;
	while (cursory <= y)
	{
		cursorx = 1;
		while (cursorx <= x)
		{
			draw(cursorx, cursory, x, y);
			cursorx++;
		}
		ft_putchar('\n');
		cursory++;
	}
}
