/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:45:29 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:30 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_rotate(t_stack **stack)
{
	t_stack	*node;

	if (!(*stack) || !((*stack)->next))
		return ;
	node = ft_stack_pop_front(stack);
	ft_stack_add_back(stack, node);
}
