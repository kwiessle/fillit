/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_valid_form.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 17:16:52 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/06 18:48:00 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include "../includes/libft.h"

int		ft_get_valid_form(char *map)
{
	size_t	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '.' || map[i] == '\n')
		{
			printf("coucou");
			i++;
		}
		if (map[i] == '#')
		{
			printf ("salut");
			i++;
			if (map[i] != '#')
			{
				i = i + 4;
				printf("bjr");
				if (map[i] == '#')
				{
					printf("prout");
					i++;
				}
				else
				{
					printf("toto");
					return (1);
				}
			}
		}
		else
		{
			printf("zdp");
			return (1);
		}
	}
	return (0);
}

int		main()
{
	char s[]= "#...\n#...\n#...\n#...\n\0";

	ft_get_valid_form(s);
	return (0);
}
