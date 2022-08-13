/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 05:13:35 by mkardes           #+#    #+#             */
/*   Updated: 2022/08/13 05:31:19 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_read(char **av, char **str, int i)
{
	int	x;

	while (i >= 0)
	{
		x = 0;
		while (str[i][x] != '\n' && str[i][x] != '\0')
		{
			if (str[i][x] == 'E' && str[i][x + 1] == 'r')
				ft_printf("\033[0;91m%s Error!\033[0;39m\n", av[2]);
			x++;
		}
		i--;
	}
}

int	main(int ac, char **av)
{
	char	**str;
	int		fd;
	int		i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	str = (char **)malloc(sizeof(char *) * 1000);
	while (i < 1000)
	{
		str[i] = get_next_line(fd);
		if (!str[i])
			break ;
		i++;
	}
	i--;
	ft_read(av, str, i);
	return (0);
}
