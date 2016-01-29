/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_forms.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:34:38 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/18 13:59:32 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static size_t		*ft_set_tab(void)
{
	size_t		*tab;
	size_t		i;

	i = 0;
	tab = (size_t *)malloc(sizeof(size_t) * 19);
	while (i < 7)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

static size_t		*ft_is_forms_1(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_set_tab();
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_o(buf, c) == 1)
			tab[0]++;
		if (ft_is_i1(buf, c) == 1)
			tab[1]++;
		if (ft_is_i2(buf, c) == 1)
			tab[2]++;
		if (ft_is_t1(buf, c) == 1)
			tab[3]++;
		if (ft_is_t2(buf, c) == 1)
			tab[4]++;
		start = start + 21;
	}
	return (tab);
}

static size_t		*ft_is_forms_2(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_1(map, c);
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_t3(buf, c) == 1)
			tab[6]++;
		if (ft_is_s1(buf, c) == 1)
			tab[7]++;
		if (ft_is_s2(buf, c) == 1)
			tab[8]++;
		if (ft_is_z1(buf, c) == 1)
			tab[9]++;
		if (ft_is_z2(buf, c) == 1)
			tab[10]++;
		start = start + 21;
	}
	return (tab);
}

static size_t		*ft_is_forms_3(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_2(map, c);
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_l2(buf, c) == 1)
			tab[12]++;
		if (ft_is_l3(buf, c) == 1)
			tab[13]++;
		if (ft_is_l4(buf, c) == 1)
			tab[14]++;
		if (ft_is_j1(buf, c) == 1)
			tab[15]++;
		if (ft_is_j2(buf, c) == 1)
			tab[16]++;
		start = start + 21;
	}
	return (tab);
}

size_t				*ft_is_forms_4(char *map, char c)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_3(map, c);
	while (start < 546)
	{
		if (!map[start])
			break ;
		buf = ft_strsub(map, start, 20);
		if (ft_is_t4(buf, c) == 1)
			tab[5]++;
		if (ft_is_l1(buf, c) == 1)
			tab[11]++;
		if (ft_is_j3(buf, c) == 1)
			tab[17]++;
		if (ft_is_j4(buf, c) == 1)
			tab[18]++;
		start = start + 21;
	}
	return (tab);
}
