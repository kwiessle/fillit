#include "../includes/fillit.h"

char	*ft_solver(char *map, size_t nb_tetriminos, char *buffer)
f{
	char		c;
	size_t		i;
	size_t		index;
	char		*tmp_map;
	size_t		s_line;
	size_t		start;

	c = 64;
	i = 0;
	start = 0;
	index = 1;
	s_line = ft_line_size(map) - 3;
	tmp_map = map;
	while (map[i] && nb_tetriminos != 0)
	{
		if (ft_available_o(tmp_map, i) == 1 && ft_is_o(ft_strsub(buffer, start, 20), '.') == 1)
		{
			tmp_map = ft_print_o(tmp_map, c + index, i);
			index++;
			nb_tetriminos--;
			start = start + 21;
		}
		if (ft_available_o(tmp_map, i) == 1 && ft_is_o(ft_strsub(buffer, start, 20), '.') == 0)
			nb_tetriminos++;
		i++;
	}
	if (nb_tetriminos > 0)
	{
		printf("ENLARGED");
		tmp_map = set_map(ft_line_size(map));
		map = tmp_map;
		i = 0;
		start = 0;
		s_line++;
		while (index-- != 2)
			nb_tetriminos++;
		nb_tetriminos++;
		while (map[i] && nb_tetriminos != 0)
		{
			if (ft_available_o(tmp_map, i) == 1 && ft_is_o(ft_strsub(buffer, start, 20), '.') == 1)
			{
				tmp_map = ft_print_o(tmp_map, c + index, i);
				index++;
				nb_tetriminos--;
				start = start + 21;
			}
			i++;
		}
	}
	return (tmp_map);
}
