/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:54 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:55 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stack_last(t_stack **stack)
{
	t_stack	*node;

	node = (*stack);
	if (!stack)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
