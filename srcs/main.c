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

static int		main_test(char **buf)
{
	if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1 || ft_4(buf) == 1 ||\
			ft_count_tetriminos(buf) == 27)
		error();
	return (1);
}

int		main(int ac, char **av)
{
	int			fd;
	char		*solution;
	char		**tetriminos;
	char		**tmp;
	int			k;

	k = 0;
	fd = open(av[1], O_RDONLY);
	if (ac != 2 || fd < 0)
		error();
	tetriminos = read_file(fd);
	if (!tetriminos)
		error();
	close(fd);
	if (main_test(tetriminos) != 1)
		error();
	tmp = ft_setcolor(tetriminos);
	if ((solution = solver(tmp)) == NULL)
		error();
	ft_putendl(solution);
	free(solution);
	return (0);
}
