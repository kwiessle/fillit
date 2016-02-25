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

void		error(void)
{
	ft_putendl("error");
	exit(EXIT_FAILURE);
}


int		main(int ac, char **av)
{
	int			fd;
	char		*solution;
	char		**tetriminos;
	char		**tmp;
	int			k;
	int			i= 0;

	k = 0;
	i = 0;
	fd = open(av[1], O_RDONLY);
	if (ac != 2 || fd < 0)
		error();
	tetriminos = read_file(fd);
	close(fd);
	if (!tetriminos)
		error();
	tmp = ft_set_color(tetriminos);
	if ((solution = solver(tmp)) == NULL)
		error();
	ft_putendl(solution);
	free(solution);
	return (0);
}
