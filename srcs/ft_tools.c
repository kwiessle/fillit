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
