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
