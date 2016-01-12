#include "../includes/fillit.h"

char	*ft_solver(char *map)
{
	char			c;
	size_t		i;
//	size_t		index;
	char		*tmp_map;

	c = 'A';
	i = 0;
	while (map[i])
	{
		if (map[i] == '.')
			tmp_map = ft_print_o(map, c, i);
		i++;
		c++;
	}
	return (tmp_map);
}
