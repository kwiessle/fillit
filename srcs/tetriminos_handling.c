#include "../includes/fillit.h"

void		reset_tetriminos(char *tetriminos)
{
	int		i;

	i = 0;
	while (tetriminos[i])
	{
		if (tetriminos[i] >= 'A' && tetriminos[i] <= 'Z')
			tetriminos[i] += 32 ;
		++i;
	}
}

void		reset_all_tetriminos(char **tetriminos)
{
	int		i;

	i = 0;
	while (tetriminos[i])
	{
		reset_tetriminos(tetriminos[i]);
		++i;
	}
}

int			is_tetriminos(char *tetriminos, int i, char letter)
{
	int		hashnb;

	hashnb = 0;
	if (i >= 0 && i < 20 && tetriminos[i] == '#')
	{
		tetriminos[i] = letter;
		++hashnb;
		hashnb += is_tetriminos(tetriminos, i + 1, letter);
		hashnb += is_tetriminos(tetriminos, i + 5, letter);
		hashnb += is_tetriminos(tetriminos, i - 1, letter);
		hashnb += is_tetriminos(tetriminos, i - 5, letter);
	}
	return (hashnb);
}

int			set_tetriminos(char *tetriminos, int i, char *solution, int j)
{
	int		hashnb;
	int		len;

	hashnb = 0;
	len = 0;
	while (solution[len] != '\n')
		++len;
	++len;
	if (i >= 0 && i < 20 && j >= 0 && j < (len * (len - 1))
			&& tetriminos[i] >= 'a' && tetriminos[i] <= 'z' && solution[j] == '.')
	{
		tetriminos[i] -= 32;
		solution[j] = tetriminos[i];
		++hashnb;
		hashnb += set_tetriminos(tetriminos, i + 1, solution, j + 1);
		hashnb += set_tetriminos(tetriminos, i + 5, solution, j + len);
		hashnb += set_tetriminos(tetriminos, i - 1, solution, j - 1);
	}
	return (hashnb);
}
