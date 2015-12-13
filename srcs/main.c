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
#include "../includes/libft.h"

int		main(void)
{
	int			fd;
	int			ret;
	size_t		*tab;
	size_t		check;
	size_t		check2;
	char		buf[BUF_SIZE + 1];

	fd = open("../examples/maxtetriminos", O_RDONLY);
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
		ft_putstr(ft_get_alpha(buf));
		tab = ft_is_forms(buf);
	}
	printf("\n\ntab[0] = %zu      <-- o\n", tab[0]);
	printf("tab[1] = %zu      <-- i\n", tab[1]);
	printf("tab[2] = %zu      <-- t\n", tab[2]);
	printf("tab[3] = %zu      <-- s\n", tab[3]);
	printf("tab[4] = %zu      <-- z\n", tab[4]);
	printf("tab[5] = %zu      <-- l\n", tab[5]);
	printf("tab[6] = %zu      <-- j\n\n\n", tab[6]);
	check = tab[0] + tab[1] + tab[2] + tab[3] + tab[4] + tab[5] + tab[6];
	if (check == ft_count_tetriminos(buf))
		ft_putstr("\nT E T R I M I N O S   A R E   O K !\n\n");
	if (check != ft_count_tetriminos(buf))
	{
		check2 = ft_count_tetriminos(buf) - check;
		printf("\nT H E R E   I S   %zu   F A L S E    T E T R I M I N O S !\n\n", check2);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	return (0);
}
