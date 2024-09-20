#include "push_swap.h"

int	has_upper_than_median(t_node *node, int median)
{
	t_node	*cur;

	if (node->value > median)
		return (1);
	cur = node->next;
	while (cur != node)
	{
		if (cur->value > median)
			return (1);
		cur = cur->next;
	}
	return (0);
}

int	has_lower_than_median(t_node *node, int median)
{
	t_node	*cur;

	if (node->value <= median)
		return (1);
	cur = node->next;
	while (cur != node)
	{
		if (cur->value <= median)
			return (1);
		cur = cur->next;
	}
	return (0);
}
