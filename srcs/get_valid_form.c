#include "../includes/fillit.h"
#include "../includes/libft.h"

int		ft_get_valid_form (char *map)
{
	int i;

	i = 0;

	while (map[i])
	{
		while (map[i] != '\n' && (map[i + 1] != '\n' || map[i + 1] != '\0'))
		{
			ft_get_angle(map);


