#include <fillit.h>

int	ft_count_tetriminos(t_triminos *tetriminos)
{
	int			nb;
	t_triminos	*current;

	current = tetriminos;
	if (current)
	{
		nb = 1;
		while (current->next)
		{
			nb++;
			current = current->next;
		}
		return (nb);
	}
	return (0);
}
