#include "ft_stack.h"

void ft_stack_swap(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !((*stack)->next))
		return ;
	node = ft_stack_pop_front(stack);
	node->next = (*stack)->next;
	(*stack)->next = node;
}
