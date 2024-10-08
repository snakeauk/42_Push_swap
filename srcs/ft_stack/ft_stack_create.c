#include "ft_stack.h"

static void	ft_stack_add_rank(t_stack **stack)
{
	int		*array;
	t_stack	*node;
	int		index;

	array = ft_array_input_stack(stack);
	if (!array)
		return ;
	ft_array_sort(array);
	node = (*stack);
	while (node)
	{
		index = 0;
		while (array[index])
		{
			if (array[index] == node->content)
			{
				node->rank = index + 1;
				break ;
			}
			index++;
		}
		node = node->next;
	}
	free(array);
}

t_stack	*ft_stack_create(int **array)
{
	t_stack *stack;
	t_stack *node;
	size_t	index;

	index = 0;
	stack = NULL;
	while ((*array)[index])
	{
		node = ft_stack_new((*array)[index]);
		ft_stack_add_back(&stack, node);
		index++;
	}
	ft_stack_add_rank(&stack);
	return (stack);
}
