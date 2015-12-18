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

size_t		ft_is_l(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 10] == '#' &&\
					map[i + 11] == '#'))
			return (1);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 5] == '#'))
			return (2);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 6] == '#' &&\
					map[i + 11] == '#'))
			return (3);
		if ((map[i] == '#' && map[i + 3] == '#') && (map[i + 4] == '#' &&\
					map[i + 5] == '#'))
			return (4);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_j(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 9] == '#' &&\
					map[i + 10] == '#'))
			return (1);
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 6] == '#' &&\
					map[i + 7] == '#'))
			return (2);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 5] == '#' &&\
					map[i + 10] == '#'))
			return (3);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 7] == '#'))
			return (4);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_valid_forms(char *map)
{
	if (ft_is_o(map) == 0 || ft_is_i(map) == 0 || ft_is_z(map) == 0 || \
			ft_is_s(map) == 0 || ft_is_t(map) == 0 || ft_is_l(map) == 0 \
			|| ft_is_j(map) == 0)
		return (1);
	else
		return (0);
}
