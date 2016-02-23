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

/*static int		main_test(char **buf)
{
	if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1 || ft_4(buf) == 1 ||\
			ft_count_tetriminos(buf) == 27)
	{
		printf("1");
		error();
	}
	return (1);
}*/

int		main(int ac, char **av)
{
	int			fd;
	char		*solution;
	char		**tetriminos;
	char		**tmp;
	int			k;

	k = 0;
	fd = open(av[1], O_RDONLY);
	printf("fdok\n");
	if (ac != 2 || fd < 0)
	{
		printf("3");
		error();
	}
	tetriminos = read_file(fd);
	printf("readfileok\n");
	if (!tetriminos)
		error();
	close(fd);
	printf("closefdok\n");
	/*if (main_test(tetriminos) != 1)
	{
		printf("4");
		error();
	}*/
	printf("maintestok\n");
	tmp = ft_setcolor(tetriminos);
	while(tmp[k])
	{
		printf("%s\n", tmp[k]);
		k++;
	}
	if ((solution = solver(tmp)) == NULL)
	{
		printf("error_solver\n");
		error();
	}
	ft_putendl(solution);
	free(solution);
	return (0);
}
