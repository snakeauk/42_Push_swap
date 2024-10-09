/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:43:04 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:43:06 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
