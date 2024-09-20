#include "push_swap.h"

void	exit_on_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	destroy_stack_then_exit(t_stack	*stack)
{
	destroy_stack(stack);
	exit_on_error();
}
