#include "libft.h"

void	ft_swap(int *i, int *j)
{
	int	w;

	w = *i;
	*i = *j;
	*j = w;
}
