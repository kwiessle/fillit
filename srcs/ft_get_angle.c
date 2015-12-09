#include "../includes/fillit.h"
#include "../includes/libft.h"

int		ft_get_angle(char *map)
{
	int i;

	i = 0;
	while(map[i])
	{
		if (map[i] ==  '#')
		{
			if (map[i + 1] == '#' && map[i + 6] == '#')
				return (0);
			else if (map[i + 4] == '#' && map[i + 5] == '#')
				return (0);
			else if (map[i + 5] == '#' && map[i + 6] == '#')
				return (0);
			else if (map[i + 1] == '#' && map[i + 5] == '#')
				return (0);
		}
		else
			i++;
	}
	return (1);
}
