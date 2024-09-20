#include "push_swap.h"

// Returns given node and set node->next to node.
t_node	*pop_node(t_node **node)
{
	t_node	*res;
	t_node	*next;
	t_node	*prev;

	if (*node == NULL)
		return (NULL);
	res = *node;
	next = res->next;
	prev = res->prev;
	if (next == res)
	{
		*node = NULL;
		return (res);
	}
	*node = next;
	next->prev = prev;
	prev->next = next;
	return (res);
}
