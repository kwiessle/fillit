#include "libft.h"

int					ft_clear_tab(char **tab)
{
	int				i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}
	return (1);
}
