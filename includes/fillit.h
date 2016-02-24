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

size_t	ft_4(char **map);
size_t	count_tetriminos(char **s);
int		get_char(char **map);
int		get_size(char **map);

/*
** T O O L S
*/

size_t	ft_tablen(char **buffer);
char	**read_file(int fd);
int		parse_tetriminos(char **tetriminos);

/*
** S O L V E R
*/

void	init_solution(char *solution, int j);
char	*solver(char **tetriminos);

/*
** TETRIMINOS_HANDLING
*/

void	reset_tetriminos(char *tetriminos);
void	reset_all_tetriminos(char **tetriminos);
int		set_tetriminos(char *tetriminos, int i, char *solution, int j);

#endif
