#include "ft_stack.h"

void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	if (!new)
		return ;
	new->next = (*stack);
	*stack = new;
}
