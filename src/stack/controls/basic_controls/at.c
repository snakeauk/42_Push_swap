#include "push_swap.h"

int	at_a(t_stack *stack, int index)
{
	t_node	*res;

	if (stack == NULL)
		return (-1);
	res = stack->top_a;
	if (res == NULL)
		return (-1);
	while (index-- > 0)
		res = res->next;
	return (res->value);
}

int	at_b(t_stack *stack, int index)
{
	t_node	*res;

	if (stack == NULL)
		return (-1);
	res = stack->top_b;
	if (res == NULL)
		return (-1);
	while (index-- > 0)
		res = res->next;
	return (res->value);
}
