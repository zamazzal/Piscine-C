/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:13:40 by zamazzal          #+#    #+#             */
/*   Updated: 2018/09/13 16:28:20 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		placen;
	int		result;

	placen = 0;
	result = 0;
	while (result == 0)
	{
		if (s1[placen] != s2[placen])
		{
			result = s1[placen] - s2[placen];
			return (result);
		}
		if ((s1[placen] == '\0') && (s2[placen] == '\0'))
		{
			return (0);
		}
		placen++;
	}
	return (0);
}

void	ft_putstr(int argc, char **argv)
{
	int placea;
	int placeb;

	placea = 1;
	while (argc > placea)
	{
		placeb = 0;
		while (argv[placea][placeb] != '\0')
		{
			ft_putchar(argv[placea][placeb]);
			placeb++;
		}
		ft_putchar('\n');
		placea++;
	}
}

int		main(int argc, char **argv)
{
	int		placea;
	int		placeb;
	int		rzlt;
	char	*backup;

	placea = 1;
	while (placea < argc)
	{
		placeb = placea + 1;
		while (placeb < argc)
		{
			rzlt = ft_strcmp(argv[placea], argv[placeb]);
			if (rzlt > 0)
			{
				backup = argv[placea];
				argv[placea] = argv[placeb];
				argv[placeb] = backup;
			}
			placeb++;
		}
		placea++;
	}
	ft_putstr(argc, argv);
}
