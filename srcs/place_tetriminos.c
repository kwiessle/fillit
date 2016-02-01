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
	return (tab);
}


