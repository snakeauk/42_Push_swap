#include "push_swap.h"

int	is_sorted(t_node *node, int size)
{
	int	i;

	i = 0;
	if (node == NULL)
		return (0);
	while (i < size - 1)
	{
		if (node->next->value < node->value)
			return (0);
		node = node->next;
		i++;
	}
	return (1);
}
