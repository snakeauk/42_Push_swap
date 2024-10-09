/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:58 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stack_max(t_stack **stack)
{
	t_stack	*max;
	t_stack	*node;

	max = (*stack);
	node = (*stack);
	while (node)
	{
		if (node->content > max->content)
			max = node;
		node = node->next;
	}
	return (max);
}
