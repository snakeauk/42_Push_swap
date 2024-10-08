#include "ft_stack.h"

t_stack	*ft_stack_pop_front(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack))
		return (NULL);
	node = (*stack);
	(*stack) = (*stack)->next;
	node->next = NULL;
	return (node);
}

t_stack	*ft_stack_pop_back(t_stack **stack)
{
	t_stack	*node;
	t_stack	*last;

	if (!(*stack))
		return (NULL);
	if (!(*stack)->next)
	{
		node = (*stack);
		(*stack) = NULL;
		return (node);
	}
	last = (*stack);
	while (last->next->next)
		last = last->next;
	node = last->next;
	last->next = NULL;
	return (node);
}
