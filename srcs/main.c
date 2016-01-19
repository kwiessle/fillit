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

int		main_test(char *buf)
{
	if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1 || ft_4(buf) == 1 ||\
			ft_count_tetriminos(buf) >= 27)
	{
		ft_putstr("error\n");
		return (0);
	}
	if (ft_count_tetriminos(buf) != ft_add_tab(ft_is_forms_4(buf, '#')))
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	int			fd;
	int			ret;
	char		buf[BUF_SIZE + 1];
	char		*final_map;

	if (ac != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		if (main_test(buf) == 1)
			final_map = set_map(ft_square_op(ft_count_tetriminos(buf) * 4));
	}
	ft_putstr(ft_solver(final_map, ft_count_tetriminos(buf), buf));
	if (close(fd) == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (0);
}
