/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 23:27:46 by vquesnel          #+#    #+#             */
/*   Updated: 2016/03/08 23:28:03 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	**ft_set_color(char **map)
{
	int		i;
	char	c;
	int		j;
	char	**tmp;

	i = 0;
	c = 'a';
	if((tmp = (char **)malloc(sizeof(char *) * ft_tablen(map) + 1)) == NULL)
		return (NULL);
	while (map[i] != NULL)
	{
		j = 0;
		if ((tmp[i] = (char *)malloc(sizeof(char) * ft_strlen(map[i]))) == NULL)
			return (NULL);
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
		c += 1;
	}
	tmp[i] = NULL;
	return (tmp);
}

size_t	ft_tablen(char **buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i])
		i++;
	return (i);
}

static int		main_test(char *buf)
{
	if (ft_get_char(buf) == 1 || ft_get_size(buf) == 1)
		error();
	if (ft_count_tetriminos(buf) >= 27 || ft_4(buf) == 1)
		error();
	if (ft_count_tetriminos(buf) != ft_add_tab(ft_is_forms_4(buf, '#')))
		error();
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
	if (!main_test(buf))
	{
		free(tetriminos);
		close(fd);
		error();
	}
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

