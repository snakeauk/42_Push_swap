#include "ft_stack.h"

void	ft_stack_rotate(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !((*stack)->next))
		return ;
	node = ft_stack_pop_front(stack);
	ft_stack_add_back(stack, node);
}
