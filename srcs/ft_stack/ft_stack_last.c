#include "ft_stack.h"

t_stack	*ft_stack_last(t_stack **stack)
{
	t_stack	*node;

	node = (*stack);
	if (!stack)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
