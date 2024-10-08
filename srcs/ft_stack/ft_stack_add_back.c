#include "ft_stack.h"

void	ft_stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (stack)
	{
		if (*stack)
		{
			last = ft_stack_last(stack);
			last->next = new;
		}
		else
			(*stack) = new;
	}
}
