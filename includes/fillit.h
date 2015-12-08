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
	size_t		i;
	size_t		i + 1;
	size_t		i + 5;
	size_t		i + 6;
}					t_form
*/
int		ft_get_valid_form(char *map);
size_t	ft_4(char *map);
char	*set_map(size_t n);
int		ft_get_char(char *map);
int		ft_get_size(char *map);
size_t	ft_count_tetriminos(char *s);

#endif
