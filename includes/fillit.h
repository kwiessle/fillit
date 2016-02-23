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

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/uio.h>
# include "../libft/libft.h"
# define BUF_SIZE 676

/*
** T E S T S
*/

int		ft_get_char(char **map);
int		ft_get_size(char **map);
size_t	ft_count_tetriminos(char **s);
size_t	ft_4(char **map);
char	**read_file(int fd);

/*
** T O O L S
*/

char	**ft_setcolor(char **tetriminos);
char	**place_tetri(char *buffer);
char	ft_formcolor(char **buffer, size_t k);
size_t	ft_tablen(char **buffer);

/*
** S O L V E R
*/

char	*ft_solver(char *map, char **buffer, size_t k, size_t z);
void	reset_tetriminos(char *tetriminos);
void	reset_all_tetriminos(char **tetriminos);
int		is_tetriminos(char *tetriminos, int i, char letter);
int		set_tetriminos(char *tetriminos, int i, char *solution, int j);
char	*solver(char **tetriminos);

#endif
