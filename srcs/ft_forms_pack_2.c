#include "../includes/fillit.h"

size_t		ft_is_l(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 10] == '#' &&\
					map[i + 11] == '#'))
			return (1);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 5] == '#'))
			return (2);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 6] == '#' &&\
					map[i + 11] == '#'))
			return (3);
		if ((map[i] == '#' && map[i + 3] == '#') && (map[i + 4] == '#' &&\
					map[i + 5] == '#'))
			return (4);
		else
			i++;
	}
	return (0);
}

size_t		ft_is_j(char *map)
{
	size_t		i;

	i = 0;
	while (map[i])
	{
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 9] == '#' &&\
					map[i + 10] == '#'))
			return (1);
		if ((map[i] == '#' && map[i + 5] == '#') && (map[i + 6] == '#' &&\
					map[i + 7] == '#'))
			return (2);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 5] == '#' &&\
					map[i + 10] == '#'))
			return (3);
		if ((map[i] == '#' && map[i + 1] == '#') && (map[i + 2] == '#' &&\
					map[i + 7] == '#'))
			return (4);
		else
			i++;
	}
	return (0);
}
