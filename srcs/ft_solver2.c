#include "../includes/fillit.h"

char	*ft_solver(char *map, size_t nb_tetriminos, char *buffer)
{
	char		*tmp_map;
	char		c;
	size_t		i;
	size_t		color;
	size_t		start;
	size_t		s_line;

	tmp_map = map;
	c = 64;
	i = 0;
	color = 1;
	s_line = ft_line_size(map) - 3;
	while (map[i] && nb_tetriminos != 0)
	{
		if (map[i] == '.' && tmp_map[i] == '.')
		{
			if (ft_available_o(tmp_map, i, s_line) == 1 && ft_is_o(ft_strsub(buffer, start, 20), c) == 1)
			{
				tmp_map = ft_print_o(tmp_map, c + color, i, s_line);
				color++;
				start = start + 21;
				nb_tetriminos--;
			}
		}
		if (map[i + 1] == '\0' && nb_tetriminos != 0)
		{
			i = 0;
			while (color-- != 2)
				nb_tetriminos++;
			nb_tetriminos++;
			tmp_map = set_map(ft_line_size(map));
			map = tmp_map;
		}
		i++;
	}
	return (tmp_map);
}

