/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:20 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:22 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (stack)
	{
		if (*stack)
		{
			last = ft_stack_last(stack);
			last->next = new;
		}
		else
			(*stack) = new;
	}
}
