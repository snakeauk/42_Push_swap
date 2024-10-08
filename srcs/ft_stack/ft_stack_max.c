#include "ft_stack.h"

t_stack	*ft_stack_max(t_stack **stack)
{
	t_stack	*max;
	t_stack	*node;

	max = (*stack);
	node = (*stack);
	while (node)
	{
		if (node->content > max->content)
			max = node;
		node = node->next;
	}
	return (max);
}
