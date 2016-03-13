/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:26:13 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/13 16:51:51 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}


int		main(int ac, char **av)
{
	int			fd;
	char		*solution;
	char		**tetriminos;

	fd = open(av[1], O_RDONLY);
	if (ac != 2 || fd < 0)
		error();
	tetriminos = read_file(fd);
	close(fd);
	if (!tetriminos)
		error();
	ft_set_color(tetriminos);
	if ((solution = solver(tetriminos)) == NULL)
		error();
	ft_putendl(solution);
	free(solution);
	free(tetriminos);
	return (0);
}
