#include "../includes/fillit.h"

size_t		ft_4(char *map)
{
	char		c;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] == '#')
			j++;
		if (j > 4)
			return (1);
		if (map[i] == '\n' && (map[i + 1] == '\n' || map[i +1] == '\0'))
		{
			if (j != 4)
				return (1);
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
