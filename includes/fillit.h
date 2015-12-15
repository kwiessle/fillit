#ifndef FILLIT_H
# define FILLIT_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/uio.h>
#include "libft.h"
#define BUF_SIZE 676


// T E S T S

int		ft_get_char(char *map);
int		ft_get_size(char *map);
size_t	ft_count_tetriminos(char *s);
size_t	ft_4(char *map);

// T O O L S

char	*ft_set_color(char *map);
char	*set_map(size_t n);
size_t	*ft_is_forms(char *map);
size_t	ft_add_tab(size_t *tab);

// F O R M S

size_t	ft_is_o(char *map);
size_t	ft_is_i(char *map);
size_t	ft_is_l(char *map);
size_t	ft_is_j(char *map);
size_t	ft_is_s(char *map);
size_t	ft_is_z(char *map);
size_t	ft_is_t(char *map);




#endif
