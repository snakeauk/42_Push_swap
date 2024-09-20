#include "push_swap.h"

void	sort_5_in_a(t_stack *stack)
{
	int	min_value_index;
	int	min_value;

	if (is_sorted(stack->top_a, stack->size_a))
		return ;
	min_value_index = get_index_of_min_value_in_list(stack->top_a,
			stack->size_a);
	min_value = at_a(stack, min_value_index);
	if (min_value_index < stack->size_a / 2)
		while (at_a(stack, 0) != min_value)
			ra(stack);
	else
		while (at_a(stack, 0) != min_value)
			rra(stack);
	pb(stack);
	sort_4_in_a(stack);
	pa(stack);
}

void	sort_5_in_b(t_stack *stack)
{
	int	min_value_index;
	int	min_value;

	if (is_sorted(stack->top_b, stack->size_b))
	{
		repeat(para, stack, 5);
		return ;
	}
	min_value_index = get_index_of_min_value_in_list(stack->top_b,
			stack->size_b);
	min_value = at_b(stack, min_value_index);
	if (min_value_index * 2 <= stack->size_b)
		while (at_b(stack, 0) != min_value)
			rb(stack);
	else
		while (at_b(stack, 0) != min_value)
			rrb(stack);
	para(stack);
	sort_4_in_b(stack);
}
