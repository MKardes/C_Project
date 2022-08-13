/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 05:13:07 by mkardes           #+#    #+#             */
/*   Updated: 2022/08/13 05:31:05 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

int	write_all(int ac, char **av)
{
	int		i;
	int		fd;
	char	*line;

	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		line = get_next_line(fd);
		if (line)
			ft_printf("%s", line);
		close(fd);
		free(line);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	int		fd;
	char	*line;

	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd != -1)
		{
			line = get_next_line(fd);
			if (line != NULL)
			{
				free(line);
				close(fd);
				return (write_all(ac, av));
			}		
			free(line);
			close(fd);
		}
		i++;
	}
	ft_printf("\033[0;92mOK!\n\033[0;39m");
	return (0);
}
