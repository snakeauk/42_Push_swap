/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:40:45 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 03:15:00 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	if (!new)
		ft_stackfree(stack);
	if (*stack)
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}
	else
	{
		*stack = new;
	}
}
