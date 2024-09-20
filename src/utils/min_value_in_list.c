#include "push_swap.h"

int	get_index_of_min_value_in_list(t_node *node, int size)
{
	int	min_value;
	int	res;
	int	i;

	min_value = INT_MAX;
	res = -1;
	i = 0;
	while (i < size)
	{
		if (node->value < min_value)
		{
			min_value = node->value;
			res = i;
		}
		node = node->next;
		i++;
	}
	return (res);
}

int	get_min_value_in_list(t_node *node, int size)
{
	int	min_value;
	int	i;

	min_value = INT_MAX;
	i = 0;
	while (i < size)
	{
		if (node->value < min_value)
			min_value = node->value;
		node = node->next;
		i++;
	}
	return (min_value);
}

int	get_max_value_in_list(t_node *node, int size)
{
	int	max_value;
	int	i;

	max_value = INT_MIN;
	i = 0;
	while (i < size)
	{
		if (node->value > max_value)
			max_value = node->value;
		node = node->next;
		i++;
	}
	return (max_value);
}
