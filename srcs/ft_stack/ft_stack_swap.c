/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:45:43 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:44 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_swap(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !((*stack)->next))
		return ;
	node = ft_stack_pop_front(stack);
	node->next = (*stack)->next;
	(*stack)->next = node;
}
