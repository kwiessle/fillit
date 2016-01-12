#include "../includes/fillit.h"




char	*ft_print_o(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 3;

	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 3 + s_line] == '.') && map[i + 4 + s_line] =='.')
		{
			map[i] = c;
			map[i + 1] = c;
			map[i + 3 + s_line] = c;
			map[i + 4 + s_line] = c;
		}
		i++;
	return (map);
}
