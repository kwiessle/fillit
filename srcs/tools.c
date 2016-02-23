/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:32:55 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/16 15:34:06 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t	ft_tablen(char **buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i])
		i++;
	return (i);
}

char	**ft_setcolor(char **map)
{
	int		i;
	char	c;
	int		j;
	char	**tmp;

	i = 0;
	c = 'a';
	j = 0;
	tmp = (char **)malloc(sizeof(char *) * ft_tablen(map) + 1);
	while (map[i] != NULL)
	{
		tmp[i] = (char *)malloc(sizeof(char) * ft_strlen(map[i]));
		while (map[i][j])
		{
			if (map[i][j] == '#')
				tmp[i][j] = c;
			else
				tmp[i][j] = map[i][j];
			j++;
		}
		tmp[i][j] = '\0';
		i++;
		j = 0;
		c += 1;
	}
	tmp[i] = NULL;
	return (tmp);
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
