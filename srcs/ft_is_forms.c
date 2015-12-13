#include "../includes/fillit.h"

size_t		*ft_set_tab(void)
{
	size_t		*tab;
	size_t		i;

	i = 0;
	tab = (size_t *)malloc(sizeof(size_t) * 7);
	while (i < 7)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

size_t		*ft_is_forms(char *map)
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
		if (ft_is_o(buf) == 0)
			tab[0]++;
		if (ft_is_i(buf) == 0)
			tab[1]++;
		if (ft_is_t(buf) == 0)
			tab[2]++;
		if (ft_is_s(buf) == 0)
			tab[3]++;
		if (ft_is_z(buf) == 0)
			tab[4]++;
		if (ft_is_l(buf) == 0)
			tab[5]++;
		if (ft_is_j(buf) == 0)
			tab[6]++;
		start = start + 21;
	}
	return (tab);
}


/*
int		main(void)
{
	char *map = "....\n.##.\n.##.\n....\n\n....\n....\n..##\n..##\0";
	size_t	*tab;

	tab = ft_is_forms(map);
	printf("tab[0] = %zu\n", tab[0]);
	printf("tab[1] = %zu\n", tab[1]);
	printf("tab[2] = %zu\n", tab[2]);
	printf("tab[3] = %zu\n", tab[3]);
	printf("tab[4] = %zu\n", tab[4]);
	printf("tab[5] = %zu\n", tab[5]);
	printf("tab[6] = %zu\n", tab[6]);
	printf("tab[7] = %zu\n", tab[7]);
	printf("tab[8] = %zu\n", tab[8]);
	return (0);
}*/
