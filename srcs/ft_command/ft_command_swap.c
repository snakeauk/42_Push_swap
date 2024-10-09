/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:43:15 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:43:17 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_command.h"

int	ft_command_sa(t_stack **stack_a)
{
	if (!(*stack_a) || !((*stack_a)->next))
		return (0);
	ft_stack_swap(stack_a);
	return (SA);
}

int	ft_command_sb(t_stack **stack_b)
{
	if (!(*stack_b) || !((*stack_b)->next))
		return (0);
	ft_stack_swap(stack_b);
	return (SB);
}
