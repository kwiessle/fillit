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
# include <stdio.h>
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
char	*set_map(size_t n);
size_t	*ft_is_forms(char *map, char c);
size_t	ft_add_tab(size_t *tab);
size_t	ft_square_op(size_t n);
size_t ft_line_size(char *map);
size_t	ft_available_o(char *map, size_t c, size_t s_line);
size_t	ft_available_i1(char *map, size_t c);
size_t	ft_available_i2(char *map, size_t c, size_t s_line);
size_t	ft_available_t1(char *map, size_t c, size_t s_line);
size_t	ft_available_t2(char *map, size_t c, size_t s_line);
size_t	ft_available_t3(char *map, size_t c, size_t s_line);
size_t	ft_available_t4(char *map, size_t c, size_t s_line);
size_t	ft_available_s1(char *map, size_t c, size_t s_line);
size_t	ft_available_s2(char *map, size_t c, size_t s_line);
size_t	ft_available_z1(char *map, size_t c, size_t s_line);
size_t	ft_available_z2(char *map, size_t c, size_t s_line);
size_t	ft_available_j1(char *map, size_t c, size_t s_line);
size_t	ft_available_j2(char *map, size_t c, size_t s_line);
size_t	ft_available_j3(char *map, size_t c, size_t s_line);
size_t	ft_available_j4(char *map, size_t c, size_t s_line);
size_t	ft_available_l1(char *map, size_t c, size_t s_line);
size_t	ft_available_l2(char *map, size_t c, size_t s_line);
size_t	ft_available_l3(char *map, size_t c, size_t s_line);
size_t	ft_available_l4(char *map, size_t c, size_t s_line);
char	*ft_reset_map(char*map);
char	**place_tetri(char *buffer);
char	ft_formcolor(char **buffer, size_t k);
size_t	ft_tablen(char **buffer);

/*
** F O R M S
*/

size_t	ft_is_o(char *map, char c);
size_t	ft_is_i(char *map, char c);
size_t	ft_is_l(char *map, char c);
size_t	ft_is_j(char *map, char c);
size_t	ft_is_s(char *map, char c);
size_t	ft_is_z(char *map, char c);
size_t	ft_is_t(char *map, char c);
size_t	*ft_is_forms_4(char *map, char c);

/*
** S O L V E R
*/

char *ft_print_o(char *map, char c, size_t i);
char *ft_print_i1(char *map, char c, size_t i);
char *ft_print_i2(char *map, char c, size_t i);
char *ft_print_z1(char *map, char c, size_t i);
char *ft_print_z2(char *map, char c, size_t i);
char *ft_print_s1(char *map, char c, size_t i);
char *ft_print_s2(char *map, char c, size_t i);
char *ft_print_t1(char *map, char c, size_t i);
char *ft_print_t2(char *map, char c, size_t i);
char *ft_print_t3(char *map, char c, size_t i);
char *ft_print_t4(char *map, char c, size_t i);
char *ft_print_l1(char *map, char c, size_t i);
char *ft_print_l2(char *map, char c, size_t i);
char *ft_print_l3(char *map, char c, size_t i);
char *ft_print_l4(char *map, char c, size_t i);
char *ft_print_j1(char *map, char c, size_t i);
char *ft_print_j2(char *map, char c, size_t i);
char *ft_print_j3(char *map, char c, size_t i);
char *ft_print_j4(char *map, char c, size_t i);
char *ft_solver(char *map, char **buffer, size_t k, size_t z);
void	reset_tetriminos(char *tetriminos);
void	reset_all_tetriminos(char **tetriminos);
int		is_tetriminos(char *tetriminos, int i, char letter);
int		set_tetriminos(char *tetriminos, int i, char *solution, int j);
char	*solver(char **tetriminos);

#endif
