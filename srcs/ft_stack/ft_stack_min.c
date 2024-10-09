/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:45:06 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:07 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stack_min(t_stack **stack)
{
	t_stack	*min;
	t_stack	*node;

	min = (*stack);
	node = (*stack);
	while (node)
	{
		if (node->content < min->content)
			min = node;
		node = node->next;
	}
	return (min);
}
