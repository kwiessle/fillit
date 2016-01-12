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

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/uio.h>
# include "../libft/libft.h"
# define BUF_SIZE 676

/*
** T E S T S
*/

int		ft_get_char(char *map);
int		ft_get_size(char *map);
size_t	ft_count_tetriminos(char *s);
size_t	ft_4(char *map);

/*
** T O O L S
*/

char	*ft_set_color(char *map);
char	*set_map(size_t n);
size_t	*ft_is_forms(char *map, char c);
size_t	ft_add_tab(size_t *tab);
size_t	ft_square_op(size_t n);
size_t ft_line_size(char *map);

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
char *ft_solver(char *map, size_t nb_tetriminos);

#endif
