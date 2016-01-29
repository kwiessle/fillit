#include "../includes/fillit.h"

char	*ft_solver(char *map, size_t nb_tetriminos, char *buffer)
{
	char		c;
	size_t		i;
	char		*tmp_map;
	size_t		start;
	size_t		s_line;

	c = 65;
	i = 0;
	start = 0;
	s_line = ft_line_size(map) - 4;
	tmp_map = malloc(sizeof(map));
	while (map[i] && nb_tetriminos != 0)
	{
		if (ft_available_j3(map, i, s_line) == 1 && ft_is_j3(ft_strsub(buffer, start, 20), '#') == 1)
		{
			tmp_map = ft_print_j3(map, c, i);
			c++;
			nb_tetriminos--;
			start = start + 21;
		}
		if (ft_available_j3(map, i, s_line) == 1 && ft_is_j3(ft_strsub(buffer, start, 20), '#') == 0)
		{
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = - 1;
		}
		if (map[i + 1] == '\0' && nb_tetriminos!= 0)
		{
			i = 0;
			while (c-- != 66)
				nb_tetriminos++;
			nb_tetriminos++;
			return (ft_solver(set_map(ft_square_op(ft_count_tetriminos(buffer) * 4) + 1), nb_tetriminos, buffer));
		}
		i++;
	}
	return (tmp_map);
}
