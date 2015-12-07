#include "../includes/fillit.h"

char	*set_map(size_t n)
{
	size_t		width;
	size_t		i;
	size_t		c;
	char		*map;

	width = n;
	i = 0;
	c = 0;
	map = (char *)malloc((n * n + n + 1) * sizeof(char *));
	while (n > 0)
	{
		while (c < width)
		{
			map[i] = '#';
			i++;
			c++;
		}
		map[i] = '\n';
		c = 0;
		i++;
		n--;
	}
	map[i] = '\0';
	return (map);
}

/*int	main()
{
	printf("%s", set_map(9));
	return (0);
}*/
