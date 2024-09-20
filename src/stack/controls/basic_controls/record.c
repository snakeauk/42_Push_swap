#include "push_swap.h"

// Exit if an error occurs.
void	record_op_to_stack(t_stack *stack, t_op op)
{
	if (stack->op_list == NULL)
	{
		stack->op_list = new_op_list(op);
		if (stack->op_list == NULL)
		{
			destroy_stack(stack);
			exit_on_error();
		}
		return ;
	}
	if (append_op(stack->op_list, op) == NULL)
	{
		destroy_stack(stack);
		exit_on_error();
	}
}
