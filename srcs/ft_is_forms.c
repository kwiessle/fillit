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

static size_t		*ft_is_forms_1(char *map)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_set_tab();
	while (start < 546)
	{
		if (!map[start])
			break;
		buf = ft_strsub(map, start, 20);
		if (ft_is_o(buf) == 1)
			tab[0]++;
		if (ft_is_i(buf) == 1)
			tab[1]++;
		if (ft_is_i(buf) == 2)
			tab[2]++;
		if (ft_is_t(buf) == 1)
			tab[3]++;
		if (ft_is_t(buf) == 2)
			tab[4]++;
		if (ft_is_t(buf) == 3)
			tab[5]++;
		start = start + 21;
	}
	return (tab);
}

static size_t		*ft_is_forms_2(char *map)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_1(map);
	while (start < 546)
	{
		if (!map[start])
			break;
		buf = ft_strsub(map, start, 20);
		if (ft_is_t(buf) == 4)
			tab[6]++;
		if (ft_is_s(buf) == 1)
			tab[7]++;
		if (ft_is_s(buf) == 2)
			tab[8]++;
		if (ft_is_z(buf) == 1)
			tab[9]++;
		if (ft_is_z(buf) == 2)
			tab[10]++;
		if (ft_is_l(buf) == 1)
			tab[11]++;
		start = start + 21;
	}
	return (tab);
}

static size_t		*ft_is_forms_3(char *map)
{
	size_t		*tab;
	char		*buf;
	size_t		start;

	start = 0;
	tab = ft_is_forms_2(map);
	while (start < 546)
	{
		if (!map[start])
			break;
		buf = ft_strsub(map, start, 20);
		
		
		if (ft_is_l(buf) == 2)
			tab[12]++;
		if (ft_is_l(buf) == 3)
			tab[13]++;
		if (ft_is_l(buf) == 4)
			tab[14]++;
		if (ft_is_j(buf) == 1)
			tab[15]++;
		if (ft_is_j(buf) == 2)
			tab[16]++;
		if (ft_is_j(buf) == 3)
			tab[17]++;
		if (ft_is_j(buf) == 4)
			tab[18]++;
		start = start + 21;
	}
	return (tab);
}

size_t      *ft_is_forms(char *map)
{
    return (ft_is_forms_3(map));
}