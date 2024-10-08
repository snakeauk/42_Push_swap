#include "ft_stack.h"

void	ft_stack_print(t_stack **stack)
{
	t_stack	*node;
	size_t	index;

	index = 1;
	node = *stack;
	while (node)
	{
		ft_printf("%d: ", index);
		ft_printf("%d\n", node->content);
		node = node->next;
		index++;
	}
}
