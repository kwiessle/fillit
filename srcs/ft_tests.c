/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:21:32 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/10 16:21:43 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t		ft_4(char *map)
{
	char		c;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == '#')
			j++;
		if (j > 4)
			return (1);
		if (map[i] == '\n' && (map[i + 1] == '\n' || map[i + 1] == '\0'))
		{
			if (j != 4)
				return (1);
			else
				j = 0;
		}
		i++;
	}
	return (0);
}

size_t	ft_count_tetriminos(char *s)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '\n' && (s[i + 1] == '\n' || s[i + 1] == '\0'))
		{
			i++;
			j++;
		}
		else
			i++;
	}
	if (j > 26)
		return (27);
	return (j);
}

int		ft_get_char(char *map)
{
	size_t		i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '.' || map[i] == '#' || map[i] == '\n')
			i++;
		else
			return (1);
	}
	return (0);
}

int		ft_get_size(char *map)
{
	size_t		nl;
	size_t		i;

	nl = 4;
	i = 0;
	while (map[nl] == '\n' && i < 5)
	{
		nl = nl + 5;
		if (map[nl] == '\n' && map[nl + 1] == '\n')
		{
			i = 0;
			nl++;
		}
		if (map[nl + 1] == '\0')
			return (0);
		i++;
	}
	return (1);
}