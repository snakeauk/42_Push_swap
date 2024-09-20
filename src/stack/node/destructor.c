#include "push_swap.h"

void	destroy_node(t_node **node)
{
	while (*node != NULL)
		free(pop_node(node));
}
