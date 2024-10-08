#include "ft_stack.h"

void	ft_stack_reverse(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !((*stack)->next))
		return ;
	node = ft_stack_pop_back(stack);
	ft_stack_add_front(stack, node);
}
