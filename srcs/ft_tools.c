/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:32:55 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/16 15:34:06 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t		ft_add_tab(size_t *tab)
{
	size_t		i;
	size_t		index;

	i = 0;
	index = 0;
	while (index < 19)
	{
		i = tab[index] + i;
		index++;
	}
	return (i);
}

size_t	ft_tablen(char **buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i] != NULL)
		i++;
	return (i);
}

size_t		ft_square_op(size_t n)
{
	size_t		i;

	i = 2;
	while (i * i < n)
		i++;
	return (i);
}

size_t		ft_line_size(char *map)
{
	size_t		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	return (i);
}

char	*ft_reset_map(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if (map[i] >= 65 && map[i] <= 90)
			map[i] = '.';
		i++;
	}
	return (map);
}

char	*ft_set_color(char *map)
{
	int		i;
	char	c;
	char	*tmp;

	i = 0;
	c = 'A';
	tmp = (char *)malloc(sizeof(char) * ft_strlen(map));
	while (map[i] != '\0')
	{
		if (map[i] == '#')
			tmp[i++] = c;
		else if (map[i] == '\n' && map[i + 1] == '\n')
		{
			tmp[i] = map[i];
			c = c + 1;
			i++;
		}
		else
		{
			tmp[i] = map[i];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
