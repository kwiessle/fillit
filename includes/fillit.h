/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:54:17 by vquesnel          #+#    #+#             */
/*   Updated: 2015/12/18 14:08:07 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdio.h>
# include "../libft/libft.h"

/*
** T E S T S
*/

int		get_char(char **map);
int		get_size(char **map);
size_t	count_tetriminos(char **s);
size_t	ft_4(char **map);
int		parse_tetriminos(char **tetriminos);

/*
** T O O L S
*/

char	**place_tetri(char *buffer);
size_t	ft_tablen(char **buffer);
int		set_tetriminos(char *tetriminos, int i, char *solution, int j);
char	**read_file(int fd);

/*
** S O L V E R
*/

void	reset_tetriminos(char *tetriminos);
void	reset_all_tetriminos(char **tetriminos);
char	*solver(char **tetriminos);

#endif
