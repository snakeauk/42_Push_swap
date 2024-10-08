#include "ft_stack.h"

int	ft_stack_min_count(t_stack **stack, t_stack *min)
{
	t_stack	*node;
	int		count;

	node = *stack;
	count = 0;
	while (node && node != min)
	{
		count++;
		node = node->next;
	}
	return (count);
}
