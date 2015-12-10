/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:25:06 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/10 16:28:03 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../include/libft.h"

int		main(void)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open("../examples/falsetest3", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[riet] = '\0';
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
		if (ft_count_tetriminos(buf) == 1)
		{
			ft_putstr("\nT H E R E  I S  T O O  M A N Y \
					T E T R I M I N O S\n\n");
			return (0);
		}
	}
	ft_putstr("\nT E T R I M I N O S   I S   O K !\n\n");
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	return (0);
}
