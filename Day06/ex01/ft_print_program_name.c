/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 12:20:50 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/13 10:32:51 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int placen;

	placen = 0;
	if (argc >= 1)
	{
		while (argv[0][placen] != '\0')
		{
			ft_putchar(argv[0][placen]);
			placen++;
		}
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
