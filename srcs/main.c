/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:25:06 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/10 17:04:39 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		main(void)
{
	int			fd;
	int			ret;
	size_t		*tab;
	size_t		check;
	size_t		check2;
	char		*f_map;
	char		buf[BUF_SIZE + 1];

	fd = open("../examples/goodtest", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		if (ft_get_char(buf) == 1)
		{
			ft_putstr("\nC H A R A C T E R   F A I L E D !\n\n");
			return (0);
		}
		if (ft_get_size(buf) == 1)
		{
			ft_putstr("\nS I Z E   F A I L E D !\n\n");
			return (0);
		}
		if (ft_4(buf) == 1)
		{
			ft_putstr("\nT H E R E   I S   N O T  4 #\n\n");
			return (0);
		}
		if (ft_count_tetriminos(buf) == 27)
		{
			ft_putstr("\nT H E R E  I S  T O O  M A N Y \
					T E T R I M I N O S\n\n");
			return (0);
		}
		ft_putstr(ft_set_color(buf));
		tab = ft_is_forms(buf);
	}
	printf("\n\ntab[0] = %zu	<--[o]\n", tab[0]);
	printf("tab[1] = %zu	<--[i.1]\n", tab[1]);
	printf("tab[2] = %zu	<--[i.2]\n", tab[2]);
	printf("tab[3] = %zu	<--[t.1]\n", tab[3]);
	printf("tab[4] = %zu	<--[t.2]\n", tab[4]);
	printf("tab[5] = %zu	<--[t.3]\n", tab[5]);
	printf("tab[6] = %zu	<--[t.4]\n", tab[6]);
	printf("tab[7] = %zu	<--[s.1]\n", tab[7]);
	printf("tab[8] = %zu	<--[s.2]\n", tab[8]);
	printf("tab[9] = %zu	<--[z.1]\n", tab[9]);
	printf("tab[10] = %zu	<--[z.2]\n", tab[10]);
	printf("tab[11] = %zu	<--[l.1]\n", tab[11]);
	printf("tab[12] = %zu	<--[l.2]\n", tab[12]);
	printf("tab[13] = %zu	<--[l.3]\n", tab[13]);
	printf("tab[14] = %zu	<--[l.4]\n", tab[14]);
	printf("tab[15] = %zu	<--[j.1]\n", tab[15]);
	printf("tab[16] = %zu	<--[j.2]\n", tab[16]);
	printf("tab[17] = %zu	<--[j.3]\n", tab[17]);
	printf("tab[18] = %zu	<--[j.4]\n\n\n", tab[18]);
	check = ft_add_tab(ft_is_forms(buf));
	printf("%zu Tetriminos checked  -  %zu Form(s) Found(ed).\n", ft_count_tetriminos(buf), check);
	if (check == ft_count_tetriminos(buf))
		printf("\nT H E  [%zu]   T E T R I M I N O S   A R E   O K !\n\n", ft_count_tetriminos(buf));
	if (check != ft_count_tetriminos(buf))
	{
		check2 = ft_count_tetriminos(buf) - check;
		printf("\nT H E R E   I S   [%zu]   F A L S E    T E T R I M I N O S !\n\n", check2);
	}
	f_map = set_map(ft_count_tetriminos(buf));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr(f_map);
	ft_putchar('\n');
	ft_putchar('\n');
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	return (0);
}
