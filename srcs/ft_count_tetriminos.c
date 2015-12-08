#include "../includes/fillit.h"
#include "../includes/libft.h"

size_t	ft_count_tetriminos(char *s)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '\n' && (s[i + 1]  == '\n' || s[i + 1] == '\0'))
		{
			i++;
			j++;
		}
		else
			i++;
	}
	if (j > 26)
		return (1);
	return (0);
}
