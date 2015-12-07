/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 17:13:04 by kwiessle          #+#    #+#             */
/*   Updated: 2015/12/06 19:13:56 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"
#include <stdio.h>

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
