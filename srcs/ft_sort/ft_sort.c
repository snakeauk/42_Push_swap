#include "ft_sort.h"

int ft_sort(t_stack **stack)
{
	int	status;
	t_stack	*stack_a;
	t_stack	*stack_b;

	status = EXIT_SUCCESS;
	stack_a = (*stack);
	stack_b = NULL;
	if (ft_stack_issort(&stack_a))
		return (status);
	else if (ft_stack_size(&stack_a) <= 2)
		sort_2(&stack_a);
	else if (ft_stack_size(&stack_a) <= 3)
		sort_3(&stack_a);
	else if (ft_stack_size(&stack_a) <= 6)
		sort_mini(&stack_a, &stack_b);
	else
		sort_large(&stack_a, &stack_b);
	ft_stack_free(&stack_a);
	ft_stack_free(&stack_b);
	ft_command_print(0);
	return (status);
}
