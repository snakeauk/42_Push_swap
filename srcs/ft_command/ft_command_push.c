#include "ft_command.h"

int	ft_command_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if (!(*stack_b))
		return (0);
	node = ft_stack_pop_front(stack_b);
	ft_stack_add_front(stack_a, node);
	return (PA);
}

int	ft_command_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if (!(*stack_a))
		return (0);
	node = ft_stack_pop_front(stack_a);
	ft_stack_add_front(stack_b, node);
	return (PB);
}
