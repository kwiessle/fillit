/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:15:31 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/10 16:31:37 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

char	*ft_get_alpha(char *map)
{
	int		i;
	char	c;
	char	*tmp;

	i = 0;
	c = 'A';
	tmp = map;
	while (map[i] != '\0')
	{
		while (map[i] != '\n' && map[i + 1] != '\n')
		{
			if (map[i] == '#')
			{
				tmp[i] = c;
				map[i] = tmp[i];
			}
			else
				i++;
		}
		c = c + 1;
		i++;
	}
	return (map);
}

int		main(void)
{
	char *map;

	map = "..#.\n..#.\n..#.\n...#\n\n..#.\n..#.\n..#.\n..#.";
	printf("%s\n", ft_get_alpha(map));
	return (0);
}
