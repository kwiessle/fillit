#include "../includes/fillit.h"

char		**place_tetriminos(char *buffer)
{
	size_t	start;
	size_t	i;
	char	**tab;

	i = 0;
	start = 0;
	tab = (char **)(malloc(sizeof(char *) * ft_count_tetriminos(buffer) + 1));
	while (buffer[start])
	{
		tab[i] = ft_strsub(buffer, start, 20);
		i++;
		start = start + 21;
	}
	tab[ft_count_tetriminos(buffer)] = NULL;
	return (tab);
}

char	ft_formcolor(char *map)
{
	size_t	i;
	char	c;

	i = 0;
	while (map[i])
	{
		if (ft_isalpha(map[i]) == 1)
		{
			c = map[i];
			return (c);
		}
		else
			i++;
	}
	return (0);
}
