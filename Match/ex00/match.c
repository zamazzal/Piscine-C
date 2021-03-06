/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:05:04 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/09 21:43:10 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 != '\0')
		{
			if (match(s1 + 1, s2) || match(s1, s2 + 1))
			{
				return (1);
			}
			return (0);
		}
		return (match(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 != '\0')
		{
			return (match(s1 + 1, s2 + 1));
		}
		return (1);
	}
	return (0);
}
