#include "../../includes/fillit.h"

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
	s_line = ft_line_size(map) - 3;
	tmp_map = malloc(sizeof(map));
	while (map[i] && nb_tetriminos != 0)
	{
		if (map[i] == '.')
		{
			if (ft_available_o(map, i, s_line) == 1 && ft_is_o(ft_strsub(buffer, start, 20), '#') == 1)
			{
				tmp_map = ft_print_o(map, c, i);
				c++;
				nb_tetriminos--;
			}
		}
		i++;
	}
	return (tmp_map);
}

/*int	main()
{
	char *map = "....\n....\n....\n....\n....\n....\n....\n....\n";
	char *buffer = ".##.\n.##.\n....\n....\n\n.##.\n.##.\n....\n....\n";


	printf("%s\n", ft_solver(map, 2, buffer));
	return (0);
}*/
