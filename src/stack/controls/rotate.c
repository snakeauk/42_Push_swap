#include "push_swap.h"

void	ra(t_stack *stack)
{
	rotate_a(stack);
	record_op_to_stack(stack, RA);
}

void	rb(t_stack *stack)
{
	rotate_b(stack);
	record_op_to_stack(stack, RB);
}

void	rr(t_stack *stack)
{
	rotate_a(stack);
	rotate_b(stack);
	record_op_to_stack(stack, RR);
}
