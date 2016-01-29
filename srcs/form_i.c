#include "../includes/fillit.h"

size_t		ft_is_i(char *map, char c)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 1] == c) && (map[i + 2] == c &&\
					map[i + 3] == c))
			return (1);
		if ((map[i] == c && map[i + 5] == c) && (map[i + 10] == c &&\
					map[i + 15] == c))
			return (2);
		else
			i++;
	}
	return (0);
}

char		*ft_print_i1(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 5;
	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 2] == '.')\
			&& map[i + 3] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 2] = c;
		map[i + 3] = c;
	}
	return (map);
}

char		*ft_print_i2(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 5;
	if ((map[i] == '.' && map[i + 5 + s_line] == '.'  && map[i + 10 + (s_line * 2)] == '.') && map[i + 15 + (s_line * 3)] =='.')
	{
		map[i] = c;
		map[i + 5 + s_line] = c;
		map[i + 10 + (s_line * 2)] = c;
		map[i + 15 + (s_line * 3)] = c;
	}
	return (map);
}

size_t		ft_available_i1(char *map, size_t c)
{
	if (map[c] == '.' && map[c + 1] == '.' && map[c + 2] == '.' && \
			map[c + 3] == '.')
		return (1);
		return (0);
}

size_t		ft_available_i2(char *map, size_t c, size_t s_line)
{
	if (map[c] == '.' && map[c + 5 + s_line] == '.'  && map[c + 10 + (s_line * 2)] == '.' && map[c + 15 + (s_line * 3)] =='.')
		return (1);
	return (0);
}
