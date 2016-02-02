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
		if(!buffer[start])
			break ;
		tab[i] = ft_strsub(buffer, start, 20);
		i++;
		start = start + 21;
	}
	tab[ft_count_tetriminos(buffer)] = NULL;
	return (tab);
}

char	ft_formcolor(char **buffer ,size_t i)
{
	char	c;
	size_t	j;

	j = 0;
	if (buffer[i] == NULL)
		return (0) ;
	while (ft_isalpha(buffer[i][j]) == 0)
		j++;
	if (buffer[i][j] >= 65 && buffer[i][j] <= 90)
	{
		c = buffer[i][j];
		return (c);
	}
	return (0);
}
