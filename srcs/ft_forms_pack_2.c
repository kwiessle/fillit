/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forms_pack_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:30:03 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/18 14:06:21 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t		ft_is_l(char *map, char c)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 5] == c) && (map[i + 10] == c &&\
					map[i + 11] == c))
			return (1);
		if ((map[i] == c && map[i + 1] == c) && (map[i + 2] == c &&\
					map[i + 5] == c))
			return (2);
		if ((map[i] == c && map[i + 1] == c) && (map[i + 6] == c &&\
					map[i + 11] == c))
			return (3);
		if ((map[i] == c && map[i + 3] == c) && (map[i + 4] == c &&\
					map[i + 5] == c))
			return (4);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_j(char *map, char c)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 5] == c) && (map[i + 9] == c &&\
					map[i + 10] == c))
			return (1);
		if ((map[i] == c && map[i + 5] == c) && (map[i + 6] == c &&\
					map[i + 7] == c))
			return (2);
		if ((map[i] == c && map[i + 1] == c) && (map[i + 5] == c &&\
					map[i + 10] == c))
			return (3);
		if ((map[i] == c && map[i + 1] == c) && (map[i + 2] == c &&\
					map[i + 7] == c))
			return (4);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_valid_forms(char *map, char c)
{
	if (ft_is_o(map, c) == 0 || ft_is_i(map, c) == 0 || ft_is_z(map, c) == 0 || \
			ft_is_s(map, c) == 0 || ft_is_t(map, c) == 0 || ft_is_l(map, c) == 0 \
			|| ft_is_j(map, c) == 0)
		return (1);
	else
		return (0);
}
