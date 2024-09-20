#include "push_swap.h"

void	insert_node(t_node **node, t_node *new_node)
{
	if (new_node == NULL)
		return ;
	if (*node == NULL)
	{
		*node = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else if (new_node != NULL)
	{
		new_node->next = *node;
		new_node->prev = (*node)->prev;
		(*node)->prev->next = new_node;
		(*node)->prev = new_node;
	}
}
