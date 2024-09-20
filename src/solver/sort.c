#include "push_swap.h"

void	sort(t_stack *stack)
{
	if (stack->size == 2)
		sort_2_in_a(stack);
	else if (stack->size == 3)
		sort_3_in_a(stack);
	else if (stack->size == 4)
		sort_4_in_a(stack);
	else if (stack->size == 5)
		sort_5_in_a(stack);
	else
		quick_sort(stack);
}
