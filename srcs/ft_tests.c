/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.c                                         :+:      :+:    :+:   */
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
			if (j > 4)
				return (1);
			if (map[i][k] == '\n' && map[i][k + 1] == '\0')
			{
				if (j != 4)
					return (1);
				else
					j = 0;
			}
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
size_t		ft_count_tetriminos(char **s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	if (i > 27)
		return (27);
	return (i);
}

int			ft_get_char(char **map)
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

int			ft_get_size(char **map)
{
	size_t		nl;
	size_t		i;
	size_t		k;

	k = 0;
	nl = 4;
	i = 0;
	while (map[i])
	{
		while (map[i][nl] == '\n' && k < 5)
		{
			nl = nl + 5;
			if (map[i][nl] == '\n' && map[i][nl + 1] == '\0')
			{
				nl = 4;
				k = 0;
			}
			if (map[i][nl + 1] == '\0')
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

static void		bzero_tetriminos(char **tetriminos)
{
	int			i;

	i = 0;
	while( i < 26)
	{
		*tetriminos = NULL;
		++tetriminos;
		++i;
	}
}

char		**read_file(int fd)
{
	char	**tetriminos;
	char	buf[546];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((tetriminos = (char **)malloc(sizeof(char *) * 27)) == NULL)
		return (NULL);
	bzero_tetriminos(tetriminos);
	ft_bzero(buf, 546);
	if (read(fd, buf, 546) < 0)
		return (NULL);
	while (buf[j] != '\0')
	{
		if (ft_strlen(buf) >= 20)
			tetriminos[i] = ft_strsub(buf, 21 * i, 21);
		else
			return (NULL);
		j += ft_strlen(tetriminos[i]);
		tetriminos[i][ft_strlen(tetriminos[i])] = '\0';
		++i;
	}
	tetriminos[i] = NULL;
	return (tetriminos);
}
