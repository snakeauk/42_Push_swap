#include "push_swap.h"

void	rra(t_stack *stack)
{
	rev_rotate_a(stack);
	record_op_to_stack(stack, RRA);
}

void	rrb(t_stack *stack)
{
	rev_rotate_b(stack);
	record_op_to_stack(stack, RRB);
}

void	rrr(t_stack *stack)
{
	rev_rotate_a(stack);
	rev_rotate_b(stack);
	record_op_to_stack(stack, RRR);
}
