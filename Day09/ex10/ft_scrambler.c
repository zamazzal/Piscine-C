/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:49:01 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/07 15:34:11 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int backupa;
	int backupb;
	int backupc;
	int backupd;

	backupa = ***a;
	backupb = *b;
	backupc = *******c;
	backupd = ****d;
	***a = backupb;
	*b = backupd;
	****d = backupc;
	*******c = backupa;
}
