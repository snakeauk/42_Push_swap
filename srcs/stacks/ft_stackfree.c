#include "push_swap.h"

void	ft_stackfree(t_stack **stack)
{
	t_stack	*cur;
	t_stack	*next;

	if (!stack)
		return ;
	cur = *stack;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	*stack = NULL;
	free(stack);
}