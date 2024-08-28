/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:08:37 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 14:31:31 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!new)
		ft_stackfree(stack);
	if (*stack)
	{
		last = (*stack)->prev;
		new->prev = last;
		new->next = stack;
		last->next = new;
		*stack = new;
	}
	else
		*stack = new;
}
