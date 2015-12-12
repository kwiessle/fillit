#include <stdio.h>
#include "../includes/fillit.h"

size_t		ft_is_o(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 5] == '#' &&\
					map[i + 6] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}

size_t		ft_is_i(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 3] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 10] == '#' &&\
					map[i + 15] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}

size_t		ft_is_z(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 6] == '#' &&\
					map[i + 7] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 4] == '#') && (map[i + 5] == '#' &&\
					map[i + 9] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}

size_t		ft_is_s(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 4] == '#' &&\
					map[i + 5] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 6] == '#' &&\
					map[i + 11] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}

size_t		ft_is_t(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == '#' && map[i + 5] == '#' && map[i + 6] == '#' &&\
				map[i + 10] == '#')
			return (0);
		else if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 6] == '#'))
			return (0);
		else if ((map[i] == '#' && map[i + 4] == '#') && (map[i + 5] == '#' &&\
					map[i + 10] == '#'))
			return (0);
		else if ((map[i] == '#' && map[i + 4] == '#') && (map[i + 5] == '#' &&\
					map[i + 6] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}

size_t		ft_is_l(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 10] == '#' &&\
					map[i + 11] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 5] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 6] == '#' &&\
					map[i + 11] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 3] == '#') && (map[i + 4] == '#' &&\
					map[i + 5] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}

size_t		ft_is_j(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 9] == '#' &&\
					map[i + 10] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 6] == '#' &&\
					map[i + 7] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 5] == '#' &&\
					map[i + 10] == '#'))
			return (0);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 7] == '#'))
			return (0);
		else
			i++;
	}
	return (1);
}
int		main()
{
	char *error = "##..\n.##.\n....\n....\n";

	/* T   M A P S*/
	char	*t1 = "#...\n##..\n#...\n....\n";
	char	*t2 = "....\n....\n.###\n..#.\n";
	char	*t3 = "....\n.#..\n##..\n.#..\n";
	char	*t4 = "....\n.#..\n###.\n....\n";

	/* L   M A P S*/
	char	*l1 = "..#.\n..#.\n..##\n....\n";
	char	*l2 = "....\n....\n###.\n#...\n";
	char	*l3 = "....\n.##.\n..#.\n..#.\n";
	char	*l4 = "....\n....\n...#\n.###\n";

	/* J    M A P S*/
	char	*j1 = "....\n...#\n...#\n..##\n";
	char	*j2 = "....\n.#..\n.###\n....\n";
	char	*j3 = "##..\n#...\n#...\n....\n";
	char	*j4 = "....\n....\n###.\n..#.\n";


	printf("\n\n%s\n\n", error);
	printf("ERROR = 1   ||   SUCCES = 0");
	printf("\n\nresult : %zu\n\n", ft_is_z(error));
	return (0);
}
