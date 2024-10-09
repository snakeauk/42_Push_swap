/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_less_6.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:11 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:12 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

static void	push_min(t_stack **stack_a, t_stack **stack_b, t_stack *min)
{
	int	min_count;
	int	size;

	min_count = ft_stack_min_count(stack_a, min);
	size = ft_stack_size(stack_a);
	if (min_count <= size / 2)
	{
		while (*stack_a != min)
			ft_command_print(ft_command_ra(stack_a));
	}
	else
	{
		while (*stack_a != min)
			ft_command_print(ft_command_rra(stack_a));
	}
	ft_command_print(ft_command_pb(stack_a, stack_b));
}

void	sort_mini(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*min;

	while (ft_stack_size(stack_a) > 3)
	{
		min = ft_stack_min(stack_a);
		push_min(stack_a, stack_b, min);
	}
	sort_3(stack_a);
	while (ft_stack_size(stack_b) > 0)
		ft_command_print(ft_command_pa(stack_a, stack_b));
}
