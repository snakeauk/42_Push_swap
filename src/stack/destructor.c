#include "push_swap.h"

void	destroy_stack(t_stack *stack)
{
	destroy_node(&stack->top_a);
	destroy_node(&stack->top_b);
	destroy_op_list(stack->op_list);
	free(stack);
}
