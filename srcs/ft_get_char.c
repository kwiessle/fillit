#include "../includes/fillit.h"

int		ft_get_char(char *map)
{
	size_t		i;

i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '.' || map[i] == '#' || map[i] == '\n')
			i++;
		else
			return (1);
	}
	return (0);
}
