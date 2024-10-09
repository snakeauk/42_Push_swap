/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:45:26 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:27 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_reverse(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !((*stack)->next))
		return ;
	node = ft_stack_pop_back(stack);
	ft_stack_add_front(stack, node);
}
