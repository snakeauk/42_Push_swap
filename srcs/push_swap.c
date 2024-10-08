#include "push_swap.h"

int	ft_push_swap(int **array)
{
	t_stack	*stack;
	int		status;

	stack = ft_stack_create(array);
	if (!stack)
		return (EXIT_FAILURE);
	status = ft_sort(&stack);
	return (status);
}
