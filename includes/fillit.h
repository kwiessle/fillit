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
# include "../libft/libft.h"

/*
** T E S T S
*/

int		ft_get_char(char **map);
int		ft_get_size(char **map);
size_t	ft_count_tetriminos(char **s);
size_t	ft_4(char **map);

/*
** T O O L S
*/

char	**ft_setcolor(char **tetriminos);
char	**place_tetri(char *buffer);
char	ft_formcolor(char **buffer, size_t k);
size_t	ft_tablen(char **buffer);
int		set_tetriminos(char *tetriminos, int i, char *solution, int j);
int		is_tetriminos(char *tetriminos, int i, char letter);
char	**read_file(int fd);

/*
** S O L V E R
*/

void	reset_tetriminos(char *tetriminos);
void	reset_all_tetriminos(char **tetriminos);
char	*solver(char **tetriminos);

#endif
