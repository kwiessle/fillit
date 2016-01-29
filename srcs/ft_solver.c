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
	s_line = ft_line_size(map) - 5;
	tmp_map = malloc(sizeof(map));
	while (map[i] && nb_tetriminos != 0)
	{
		if (ft_available_o(map, i, s_line +2) == 1 && ft_is_o(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("o\n");
			tmp_map = ft_print_o(map, c, i);
			c++;
			nb_tetriminos--;
			start = start + 21;
			i = -1;
		}
		if (ft_available_i1(map, i) == 1 && ft_is_i1(ft_strsub(buffer, start, 20), '#') == 1)
		{
			tmp_map = ft_print_i1(map, c, i);
			printf("i1\n");
			c++;
			nb_tetriminos--;
			start = start + 21;
			i = -1;
		}
		if (ft_available_i2(map, i, s_line) == 1 && ft_is_i2(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("i2\n");
			tmp_map = ft_print_i2(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_t1(map, i, s_line + 1) == 1 && ft_is_t1(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("t1\n");
			tmp_map = ft_print_t1(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_t2(map, i, s_line + 1) == 1 && ft_is_t2(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("t2\n");
			tmp_map = ft_print_t2(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_t3(map, i, s_line + 1) == 1 && ft_is_t3(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("t3\n");
			tmp_map = ft_print_t3(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_t4(map, i, s_line + 1) == 1 && ft_is_t4(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("t4\n");
			tmp_map = ft_print_t4(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_j1(map, i, s_line + 1) == 1 && ft_is_j1(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("j1\n");
			tmp_map = ft_print_j1(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_j2(map, i, s_line + 1) == 1 && ft_is_j2(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("j2\n");
			tmp_map = ft_print_j2(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_j3(map, i, s_line + 1) == 1 && ft_is_j4(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("j3\n");
			tmp_map = ft_print_j3(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_j4(map, i, s_line + 1) == 1 && ft_is_j4(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("j4\n");
			tmp_map = ft_print_j4(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_l1(map, i, s_line + 1) == 1 && ft_is_l1(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("l1\n");
			tmp_map = ft_print_l1(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_l2(map, i, s_line + 1) == 1 && ft_is_l2(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("l2\n");
			tmp_map = ft_print_l2(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_l3(map, i, s_line + 1) == 1 && ft_is_l3(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("l3\n");
			tmp_map = ft_print_l3(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_l4(map, i, s_line + 1) == 1 && ft_is_l4(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("l4\n");
			tmp_map = ft_print_l4(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_s1(map, i, s_line + 1) == 1 && ft_is_s1(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("s1\n");
			tmp_map = ft_print_s1(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_s2(map, i, s_line + 1) == 1 && ft_is_s2(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("s2\n");
			tmp_map = ft_print_s2(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_z1(map, i, s_line + 1) == 1 && ft_is_z1(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("z1\n");
			tmp_map = ft_print_z1(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
		}
		if (ft_available_z2(map, i, s_line + 1) == 1 && ft_is_z2(ft_strsub(buffer, start, 20), '#') == 1)
		{
			printf("z2\n");
			tmp_map = ft_print_z2(map, c, i );
			start = start + 21;
			nb_tetriminos--;
			c++;
			i = -1;
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
