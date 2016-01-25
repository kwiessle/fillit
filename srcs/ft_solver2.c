#include "../includes/fillit.h"

char	*ft_solver(char *final_map, size_t nb_tetriminos, char *buffer)
{
	char		*tmp_map;
	size_t		i;
	char		color;
	size_t		start;
	size_t		s_line;

	i = 0;
	color = 65;
	s_line = ft_line_size(final_map) - 3;
	start = 0;
	tmp_map = final_map;
	while (final_map[i] != '\0' && nb_tetriminos != 0)
	{
		if (final_map[i] == '.')// && tmp_map[i] != '\0')
		{
			if (ft_available_o(final_map, i, s_line) == 1 && ft_is_o(ft_strsub(buffer, start, 20), '#') == 1)
			{
				tmp_map = ft_print_o(final_map, color, i);
				color++;
				start = start + 21;
				nb_tetriminos--;
			}
		}
		if (final_map[i + 1] == '\0' && nb_tetriminos != 0)
		{
			i = 0;
			while (color-- != 2)
				nb_tetriminos++;
			nb_tetriminos++;
			tmp_map = set_map(ft_line_size(final_map));
			final_map = tmp_map;
		}
			i++;
	}
	return (tmp_map);
}
