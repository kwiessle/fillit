/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:26:48 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/16 15:29:51 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"

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
