#include "push_swap.h"

void	sort_2_in_a(t_stack *stack)
{
	if (at_a(stack, 0) > at_a(stack, 1))
		sa(stack);
}

void	sort_2_in_b(t_stack *stack)
{
	if (at_b(stack, 0) > at_b(stack, 1))
	{
		pa(stack);
		pa(stack);
		ra(stack);
		ra(stack);
	}
	else
	{
		pa(stack);
		ra(stack);
		pa(stack);
		ra(stack);
	}
}
