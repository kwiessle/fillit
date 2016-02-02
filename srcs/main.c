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
			printf("tab length :%zu\n", ft_tablen(tab));
			printf("%c\n", ft_formcolor(tab[0]));
			printf("%c\n", ft_formcolor(tab[1]));
			printf("%c\n", ft_formcolor(tab[2]));
			printf("%c\n", ft_formcolor(tab[3]));
			printf("%c\n", ft_formcolor(tab[4]));
			printf("%c\n", ft_formcolor(tab[5]));
			printf("%c\n", ft_formcolor(tab[6]));
			printf("%c\n", ft_formcolor(tab[8]));
			printf("%c\n", ft_formcolor(tab[9]));
			printf("%c\n", ft_formcolor(tab[10]));
			printf("%c\n", ft_formcolor(tab[11]));
			printf("%c\n", ft_formcolor(tab[12]));
			printf("%c\n", ft_formcolor(tab[13]));
			printf("%c\n", ft_formcolor(tab[14]));
			printf("%c\n", ft_formcolor(tab[15]));
			printf("%c\n", ft_formcolor(tab[16]));
			printf("%c\n", ft_formcolor(tab[17]));
			printf("%c\n", ft_formcolor(tab[18]));
			final_map = set_map(ft_square_op(ft_tablen(tab) * 4));
		}
		else
			return (0);
	}
	ft_putendl(ft_solver(final_map, ft_tablen(tab), tab, 0));
	close(fd);
	return (0);
}
