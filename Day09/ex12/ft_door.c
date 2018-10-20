/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:16:27 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/07 16:22:11 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_door.h>

void ft_putstr	(char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, str, i);
	}
}

int ft_bool close_door(t_door *door)
{
	ft_putstr("Door closing...");
	state = 0;
	return (1);
}

void is_door_open(t_door door)
{
	ft_putstr("Door is open ?");
	return (1);
}

int ft_bool is_door_close(t_door* door)
{
	ft_putstr("Door is open ?") ;
}
