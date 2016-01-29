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
	size_t	*tab;
	if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1 || ft_4(buf) == 1 ||\
			ft_count_tetriminos(buf) >= 27)
	{
		ft_putstr("error4\n");
		return (0);
	}
	if (ft_count_tetriminos(buf) != ft_add_tab(ft_is_forms_4(buf, '#')))
	{
		tab = ft_is_forms_4(buf, '#');
		ft_putnbr(ft_count_tetriminos(buf));
		ft_putchar('\n');
		ft_putnbr(ft_add_tab(ft_is_forms_4(buf, '#')));
		ft_putchar('\n');
		printf("tab [0] ; %zu\n", tab[0]);
		printf("tab [1] ; %zu\n", tab[1]);
		printf("tab [2] ; %zu\n", tab[2]);
		printf("tab [3] ; %zu\n", tab[3]);
		printf("tab [4] ; %zu\n", tab[4]);
		printf("tab [5] ; %zu\n", tab[5]);
		printf("tab [6] ; %zu\n", tab[6]);
		printf("tab [7] ; %zu\n", tab[7]);
		printf("tab [8] ; %zu\n", tab[8]);
		printf("tab [9] ; %zu\n", tab[9]);
		printf("tab [10] ; %zu\n", tab[10]);
		printf("tab [11] ; %zu\n", tab[11]);
		printf("tab [12] ; %zu\n", tab[12]);
		printf("tab [13] ; %zu\n", tab[13]);
		printf("tab [14] ; %zu\n", tab[14]);
		printf("tab [15] ; %zu\n", tab[15]);
		printf("tab [16] ; %zu\n", tab[16]);
		printf("tab [17] ; %zu\n", tab[17]);
		printf("tab [18] ; %zu\n", tab[18]);
		ft_putstr("error5\n");
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
		ft_putstr("error1\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("error2\n");
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
		ft_putstr("error3\n");
		return (0);
	}
	return (0);
}
