#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*res;

	res = ft_calloc(sizeof(t_node), 1);
	if (res == NULL)
		return (NULL);
	res->value = value;
	return (res);
}
