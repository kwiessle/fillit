/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:31:26 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/17 15:38:10 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t		ft_4(char **map)
{
	size_t		i;
	size_t		j;
	size_t		k;

	k = 0;
	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][k])
		{
			if (map[i][k] == '#')
				j++;
			k++;
		}
		if (j != 4)
			return (1);
		j = 0;
		k = 0;
		i++;
	}
	return (0);
}

size_t		count_tetriminos(char **s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	if (i > 27)
		return (27);
	return (i);
}

int			get_char(char **map)
{
	size_t		i;
	size_t		k;

	k = 0;
	i = 0;
	while (map[i + 1] != NULL)
	{
		while (map[i][k] != '\0')
		{
			if (map[i][k] == '.' || map[i][k] == '#' || map[i][k] == '\n')
				k++;
			else
				return (1);
		}
		k = 0;
		i++;
	}
	return (0);
}

static int			get_one_size(char *map, int i)
{
	int		k;

	k = 0;
	if (map[i] != '\n')
	{
		++k;
		k += get_one_size(map, i + 5);
		k += get_one_size(map, i + 10);
		k += get_one_size(map, i + 15);
	}
	return (k);
}

int			get_size(char **tetriminos)
{
	int		i;

	while (*tetriminos)
	{
		i = 0;
		while ((*tetriminos)[i] && (*tetriminos)[i] != '\n')
			++i;
		if ((*tetriminos)[i] && get_one_size(*tetriminos, i) != 4)
			return (0);
		++tetriminos;
	}
	return (1);
}
