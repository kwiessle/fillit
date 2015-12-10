<<<<<<< HEAD
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
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:15:31 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/10 16:47:51 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

char	*ft_get_alpha(char *map)
{
	int		i;
	char	c;
	char	*tmp;

	i = 0;
	c = 'A';
	tmp = (char *)malloc(sizeof(char) * ft_strlen(map));
	while (map[i] != '\0')
	{
		if (map[i] == '#')
		{
			tmp[i] = c;
			i++;
		}
		else if ( map[i] == '\n' && map[i + 1] == '\n')
		{
			tmp[i] = map[i];
			i++;
			c = c + 1;
		}
		else
		{
			tmp[i] = map[i];
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}

/*int		main(void)
{
	char *map;

	map = "...#\n..#.\n..#.\n...#\n\n#...\n..#.\n#...\n..#.";
	printf("%s\n", ft_get_alpha(map));
	return (0);
}*/
>>>>>>> adf1b4d1a473bbdc83b1630a96fa63aadb5f6e5e