/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:25:06 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/18 14:23:46 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void		error(void)
{
	ft_putendl_fd("error", 2);
	exit(EXIT_FAILURE);
}

static int		main_test(char *buf)
{
	if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1 || ft_4(buf) == 1 ||\
			ft_count_tetriminos(buf) >= 27)
		error();
	if (ft_count_tetriminos(buf) != ft_add_tab(ft_is_forms_4(buf, '#')))
		error();
	return (1);
}

int		main(int ac, char **av)
{
	int			fd;
	int			ret;
	char		buf[BUF_SIZE + 1];
	char		*final_map;
	char		**tab;

	fd = open(av[1], O_RDONLY);
	if (ac != 2 || fd == -1)
		error();
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		if (main_test(buf) == 1)
		{
			tab = place_tetriminos(ft_set_color(buf));
			final_map = set_map(ft_square_op(ft_tablen(tab) * 4));
		}
		else
			return (0);
	}
	ft_putendl(ft_solver(final_map, tab, 0, 1));
	close(fd);
	return (0);
}
