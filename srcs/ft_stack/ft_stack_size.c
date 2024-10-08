#include "ft_stack.h"

int	ft_stack_size(t_stack **stack)
{
	int		count;
	t_stack	*node;

	if (!stack)
		return (-1);
	count = 0;
	node = (*stack);
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
