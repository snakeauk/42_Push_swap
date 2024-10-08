#include "ft_stack.h"

t_stack	*ft_stack_min(t_stack **stack)
{
	t_stack	*min;
	t_stack	*node;

	min = (*stack);
	node = (*stack);
	while (node)
	{
		if (node->content < min->content)
			min = node;
		node = node->next;
	}
	return (min);
}
