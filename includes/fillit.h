#ifndef FILLIT_H
# define FILLIT_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/uio.h>
#include "libft.h"
#define BUF_SIZE 676

typedef struct		t_form
{
	size_t		a;
	size_t		b;
	size_t		c;
	size_t		d ;
}					t_form;

int		ft_get_valid_form(char *map);
size_t	ft_4(char *map);
char	*set_map(size_t n);
int		ft_get_char(char *map);
int		ft_get_size(char *map);
size_t	ft_count_tetriminos(char *s);
char	*ft_get_alpha(char *map);
size_t	ft_is_o(char *map);
size_t	ft_is_i(char *map);
size_t	ft_is_l(char *map);
size_t	ft_is_j(char *map);
size_t	ft_is_s(char *map);
size_t	ft_is_z(char *map);
size_t	ft_is_t(char *map);
size_t	*ft_is_forms(char *map);

#endif
