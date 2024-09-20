#include "push_swap.h"

void	pa(t_stack *stack)
{
	t_node	*tmp;

	tmp = pop_from_b(stack);
	push_to_a(stack, tmp);
	record_op_to_stack(stack, PA);
}

void	pb(t_stack *stack)
{
	t_node	*tmp;

	tmp = pop_from_a(stack);
	push_to_b(stack, tmp);
	record_op_to_stack(stack, PB);
}

void	para(t_stack *stack)
{
	pa(stack);
	ra(stack);
}
