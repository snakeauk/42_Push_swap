/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:40:45 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 14:41:18 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!new)
		ft_stackfree(stack);
	if (*stack)
	{
		last = ft_stacklast(stack);
		new->next = last->next;
		last->next = new;
		new->prev = last;
	}
	else
		*stack = new;
}
