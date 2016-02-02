#include "../includes/fillit.h"

char	*ft_solver(char *map, char **buffer,  size_t k, char c)
{
	size_t		i;
	size_t		s_line;
	char		s;

	s =	ft_formcolor(buffer);
	printf ("%c\n\n", s);
	i = 0;
	s_line = ft_line_size(map) - 5;
	while (map[i] && buffer[k] != NULL)
	{
		if (ft_available_o(map, i, s_line + 2) == 1 && ft_is_o(buffer[k], c) == 1)
		{
			map = ft_print_o(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_i1(map, i) == 1 && ft_is_i(buffer[k], c) == 1)
		{
			map = ft_print_i1(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_i2(map, i, s_line) == 1 && ft_is_i(buffer[k], c) == 2)
		{
			map = ft_print_i2(map, c, i );
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_t1(map, i, s_line + 1) == 1 && ft_is_t(buffer[k], c) == 1)
		{
			map = ft_print_t1(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_t2(map, i, s_line + 1) == 1 && ft_is_t(buffer[k], c) == 2)
		{
			map = ft_print_t2(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_t3(map, i, s_line + 1) == 1 && ft_is_t(buffer[k], c) == 3)
		{
			map = ft_print_t3(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_t4(map, i, s_line + 1) == 1 && ft_is_t(buffer[k], c) == 4)
		{
			map = ft_print_t4(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_j1(map, i, s_line + 1) == 1 && ft_is_j(buffer[k], c) == 1)
		{
			map = ft_print_j1(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_j2(map, i, s_line + 1) == 1 && ft_is_j(buffer[k], c) == 2)
		{
			map = ft_print_j2(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_j3(map, i, s_line + 1) == 1 && ft_is_j(buffer[k], c) == 3)
		{
			map = ft_print_j3(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_j4(map, i, s_line + 1) == 1 && ft_is_j(buffer[k], c) == 4)
		{
			map = ft_print_j4(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_l1(map, i, s_line + 1) == 1 && ft_is_l(buffer[k], c) == 1)
		{
			map = ft_print_l1(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_l2(map, i, s_line + 1) == 1 && ft_is_l(buffer[k], c) == 2)
		{
			map = ft_print_l2(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_l3(map, i, s_line + 1) == 1 && ft_is_l(buffer[k], c) == 3)
		{
			map = ft_print_l3(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_l4(map, i, s_line + 1) == 1 && ft_is_l(buffer[k], c) == 4)
		{
			map = ft_print_l4(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_s1(map, i, s_line + 1) == 1 && ft_is_s(buffer[k], c) == 1)
		{
			map = ft_print_s1(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_s2(map, i, s_line + 1) == 1 && ft_is_s(buffer[k], c) == 2)
		{
			map = ft_print_s2(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_z1(map, i, s_line + 1) == 1 && ft_is_z(buffer[k], c) == 1)
		{
			map = ft_print_z1(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (ft_available_z2(map, i, s_line + 1) == 1 && ft_is_z(buffer[k], c) == 2)
		{
			map = ft_print_z2(map, c, i);
			k++;
			c++;
			return (ft_solver(map, buffer, k, c));
		}
		if (map[i + 1] == '\0' && buffer[k] != NULL)
		{
			k = 0;
			c = 'A';
			return (ft_solver(set_map(ft_line_size(map)), buffer, k, c));
		}
		i++;
	}
	return (map);
}
