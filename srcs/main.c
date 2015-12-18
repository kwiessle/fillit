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

int		main(void)
{
	int			fd;
	int			ret;
	size_t		*tab;
	char		buf[BUF_SIZE + 1];

	fd = open("../examples/goldntest", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1 || ft_4(buf) == 1 ||\
				ft_count_tetriminos(buf) >= 27 || ft_is_valid_forms(buf) == 1)
		{
			ft_putstr("error\n");
			return (0);
		}
		tab = ft_is_forms_4(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (0);
	}
	return (0);
}
