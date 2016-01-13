#include "../includes/fillit.h"

char	*ft_solver(char *map, size_t nb_tetriminos)
{
	char			c;
	size_t		i;
	size_t		index;
	char		*tmp_map;

	c = 64;
	i = 0;
	index = 1;
	while (map[i] && nb_tetriminos != 0)
	{
		if (map[i] == '.')
		{
			tmp_map = ft_print_l(map, c + index, i);
			index++;
			nb_tetriminos--;
		}
		i++;
	}
	return (tmp_map);
}
