#include "../includes/fillit.h"




char	*ft_print_o(char *map, char c)
{
	size_t		i;
	size_t		s_line;
	char *tmp_map;

	i = 0;
	s_line = ft_line_size(map) - 3;
	tmp_map = ft_memalloc(sizeof(map));
	while (map[i])
	{
		if (map[i] == '.' && map[i + 1] == '.'  && map[i + 3 + s_line] == '.' && map[i + 4 + s_line] =='.')
		{
			tmp_map[i] = c;
			tmp_map[i + 1] = c;
			tmp_map[i + 3 + s_line] = c;
			tmp_map[i + 4 + s_line] = c;
		}
		i++;
	}
	return (tmp_map);
}
