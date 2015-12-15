#include "../includes/fillit.h"

size_t		ft_add_tab(size_t	*tab)
{
	size_t		i;
	size_t		index;

	i = 0;
	index = 0;
	while (index < 19)
	{
		i = tab[index] + i;
		index++;
	}
	return (i);
}
