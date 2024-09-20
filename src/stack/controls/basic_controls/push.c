#include "push_swap.h"

void	push_to_a(t_stack *stack, t_node *node)
{
	if (node == NULL)
		return ;
	insert_node(&stack->top_a, node);
	stack->top_a = node;
	stack->size_a++;
}

void	push_to_b(t_stack *stack, t_node *node)
{
	if (node == NULL)
		return ;
	insert_node(&stack->top_b, node);
	stack->top_b = node;
	stack->size_b++;
}
