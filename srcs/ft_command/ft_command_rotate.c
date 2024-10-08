#include "ft_command.h"

int	ft_command_ra(t_stack **stack_a)
{
	if (!(*stack_a) || !((*stack_a)->next))
		return (0);
	ft_stack_rotate(stack_a);
	return (RA);
}

int	ft_command_rb(t_stack **stack_b)
{
	if (!(*stack_b) || !((*stack_b)->next))
		return (0);
	ft_stack_rotate(stack_b);
	return (RB);
}