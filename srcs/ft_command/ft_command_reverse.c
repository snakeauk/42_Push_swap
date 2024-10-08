#include "ft_command.h"

int	ft_command_rra(t_stack **stack_a)
{
	if (!(*stack_a) || !((*stack_a)->next))
		return (0);
	ft_stack_reverse(stack_a);
	return (RRA);
}

int	ft_command_rrb(t_stack **stack_b)
{
	if (!(*stack_b) || !((*stack_b)->next))
		return (0);
	ft_stack_reverse(stack_b);
	return (RRB);
}
