
# ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <stdlib.h>
# include "ft_stack.h"

int 	*ft_array_input(int argc, char **argv);
int		*ft_array_input_stack(t_stack **stack);
void	ft_array_sort(int *array);

# endif