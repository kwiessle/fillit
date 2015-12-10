#include "../includes/libft.h"
#include "../includes/fillit.h"

char	*ft_get_alpha(char *map)
{
	size_t	i;
	char	c;

	i = 0;
	c = 30;
	while (map[i])
	{
		while (map[i] != '\n' && map[i + 1] != '\n')
		{
			if (map[i] == '#')
			{
				map[i] = c;
				printf("%c\n", map[i]);
				i++;
			}
			else
				i++;
		}
		c = c + 1;
		i++;
	}
	return (map);
}

int		main()
{
	char *map = "..#.\n..#.\n..#.\n..#.\n\n..#.\n...#.\n..#.\n..#.";

	printf("%s\n", ft_get_alpha(map));
	return (0);
}
