#include "../includes/fillit.h"

size_t		ft_is_j(char *map, char c)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == c && map[i + 5] == c) && (map[i + 9] == c &&\
					map[i + 10] == c))
			return (1);
		if ((map[i] == c && map[i + 5] == c) && (map[i + 6] == c &&\
					map[i + 7] == c))
			return (2);
		if ((map[i] == c && map[i + 1] == c) && (map[i + 5] == c &&\
					map[i + 10] == c))
			return (3);
		if ((map[i] == c && map[i + 1] == c) && (map[i + 2] == c &&\
					map[i + 7] == c))
			return (4);
		else
			i++;
	}
	return (0);
}

char	*ft_print_j1(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;
	if ((map[i] == '.' && map[i + 4 + s_line] == '.'  && map[i + 7 + (s_line * 2)] == '.') && map[i + 8 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 4 + s_line] = c;
		map[i + 7 + (s_line * 2)] = c;
		map[i + 8 + (s_line * 2)] = c;
	}
	return (map);
}

char	*ft_print_j2(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;

	if ((map[i] == '.' && map[i + 4 + s_line] == '.'  && map[i + 5 + s_line] == '.') && map[i + 6 + s_line] =='.')
	{
		map[i] = c;
		map[i + 4 + s_line] = c;
		map[i + 5 + s_line] = c;
		map[i + 6 + s_line] = c;
	}
	return (map);
}

char	*ft_print_j3(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;

	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 4 + s_line] == '.') && map[i + 8 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 4 + s_line] = c;
		map[i + 8 + (s_line * 2)] = c;
	}
	return (map);
}


char	*ft_print_j4(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;
	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 2] == '.') && map[i + 6 + s_line] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 2] = c;
		map[i + 6 + s_line] = c;
	}
	return (map);
}

size_t		ft_available_j1(char *map, size_t c, size_t s_line)
{
	if ((map[c] == '.' && map[c + 4 + s_line] == '.'  && map[c + 7 + (s_line * 2)] == '.') && map[c + 8 + (s_line * 2)] =='.')
		return (1);
	return (0);
}

size_t		ft_available_j2(char *map, size_t c, size_t s_line)
{
	if ((map[c] == '.' && map[c + 4 + s_line] == '.'  && map[c + 5 + s_line] == '.') && map[c + 6 + s_line] =='.')
		return (1);
	return (0);
}

size_t		ft_available_j3(char *map, size_t c, size_t s_line)
{
	if ((map[c] == '.' && map[c + 1] == '.'  && map[c + 4 + s_line] == '.') && map[c + 8 + (s_line * 2)] =='.')
		return (1);
	return(0);
}

size_t		ft_available_j4(char *map, size_t c, size_t s_line)
{
	if ((map[c] == '.' && map[c + 1] == '.'  && map[c + 2] == '.') && map[c + 6 + s_line] =='.')
		return (1);
	return (0);
}
