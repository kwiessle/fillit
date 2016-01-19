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

char	*ft_print_i(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 5;
	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 2] == '.') && map[i + 3] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 2] = c;
		map[i + 3] = c;
	}
	else if ((map[i] == '.' && map[i + 5 + s_line] == '.'  && map[i + 10 + (s_line * 2)] == '.') && map[i + 15 + (s_line * 3)] =='.')
	{
		map[i] = c;
		map[i + 5 + s_line] = c;
		map[i + 10 + (s_line * 2)] = c;
		map[i + 15 + (s_line * 3)] = c;
	}
	i++;
	return (map);
}

char	*ft_print_z(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;
	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 5 + s_line] == '.') && map[i + 6 + s_line] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 5 + s_line] = c;
		map[i + 6 + s_line] = c;
	}
	else if ((map[i] == '.' && map[i + 3 + s_line] == '.'  && map[i + 4 + s_line] == '.') && map[i + 7 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 3 + s_line] = c;
		map[i + 4 + s_line] = c;
		map[i + 7 + (s_line * 2)] = c;
	}
	i++;
	return (map);
}

char	*ft_print_s(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;
	if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 3 + s_line] == '.') && map[i + 4 + s_line] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 3 + s_line] = c;
		map[i + 4 + s_line] = c;
	}
	else if ((map[i] == '.' && map[i + 4 + s_line] == '.'  && map[i + 5 + s_line] == '.') && map[i + 9 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 4 + s_line] = c;
		map[i + 5 + s_line] = c;
		map[i + 9 + (s_line * 2)] = c;
	}
		i++;
	return (map);
}

char	*ft_print_t(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;
	if ((map[i] == '.' && map[i + 4 + s_line] == '.'  && map[i + 5 + s_line] == '.') && map[i + 8 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 4 + s_line] = c;
		map[i + 5 + s_line] = c;
		map[i + 8 + (s_line * 2)] = c;
	}
	else if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 2] == '.') && map[i + 5 + s_line] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 2] = c;
		map[i + 5 + s_line] = c;
	}
	else if ((map[i] == '.' && map[i + 3 + s_line] == '.'  && map[i + 4 + (s_line * 2)] == '.') && map[i + 8 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 3 + s_line] = c;
		map[i + 4 + s_line] = c;
		map[i + 8 + (s_line * 2)] = c;
	}
	else if ((map[i] == '.' && map[i + 3 + s_line] == '.'  && map[i + 4 + s_line] == '.') && map[i + 5 + s_line] =='.')
	{
		map[i] = c;
		map[i + 3 + s_line] = c;
		map[i + 4 + s_line] = c;
		map[i + 5 + s_line] = c;
	}
	i++;
	return (map);
}

char	*ft_print_l(char *map, char c, size_t i)
{
	size_t		s_line;

	s_line = ft_line_size(map) - 4;
	if ((map[i] == '.' && map[i + 4 + s_line] == '.'  && map[i + 8 + (s_line * 2)] == '.') && map[i + 9 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 4 + s_line] = c;
		map[i + 8 + (s_line * 2)] = c;
		map[i + 9 + (s_line * 2)] = c;
	}
	else if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 2] == '.') && map[i + 4 + s_line] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 2] = c;
		map[i + 4 + s_line] = c;
	}
	else if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 5 + s_line] == '.') && map[i + 9 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 5 + s_line] = c;
		map[i + 9 + (s_line * 2)] = c;
	}
	else if ((map[i] == '.' && map[i + 2 + s_line] == '.'  && map[i + 3 + s_line] == '.') && map[i + 4 + s_line] =='.')
	{
		map[i] = c;
		map[i + 2 + s_line] = c;
		map[i + 3 + s_line] = c;
		map[i + 4 + s_line] = c;
	}
	i++;
	return (map);
}

char	*ft_print_j(char *map, char c, size_t i)
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
	else if ((map[i] == '.' && map[i + 4 + s_line] == '.'  && map[i + 5 + s_line] == '.') && map[i + 6 + s_line] =='.')
	{
		map[i] = c;
		map[i + 4 + s_line] = c;
		map[i + 5 + s_line] = c;
		map[i + 6 + s_line] = c;
	}
	else if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 4 + s_line] == '.') && map[i + 8 + (s_line * 2)] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 4 + s_line] = c;
		map[i + 8 + (s_line * 2)] = c;
	}
	else if ((map[i] == '.' && map[i + 1] == '.'  && map[i + 2] == '.') && map[i + 6 + s_line] =='.')
	{
		map[i] = c;
		map[i + 1] = c;
		map[i + 2] = c;
		map[i + 6 + s_line] = c;
	}
	i++;
	return (map);
}

