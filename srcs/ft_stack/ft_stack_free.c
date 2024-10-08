#include "ft_stack.h"

void	ft_stack_free(t_stack **stack)
{
	t_stack	*next;

	if (!stack)
		return ;
	while (*stack)
	{
		next = (*stack)->next;
		if (stack)
			free(*stack);
		*stack = next;
	}
	*stack = NULL;
}
