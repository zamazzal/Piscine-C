/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:36:26 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/13 11:52:00 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		placea;
	int		placeb;

	placea = argc - 1;
	while (placea >= 1)
	{
		placeb = 0;
		while (argv[placea][placeb] != '\0')
		{
			ft_putchar(argv[placea][placeb]);
			placeb++;
		}
		ft_putchar('\n');
		placea--;
	}
	return (0);
}
