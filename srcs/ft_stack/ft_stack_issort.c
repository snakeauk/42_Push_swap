/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_issort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:50 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:51 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_issort_rev(t_stack **stack)
{
	int		max;
	t_stack	*node;

	if (!stack)
		return (-1);
	node = *stack;
	if (node == NULL || node->next == NULL)
		return (-1);
	max = node->content;
	node = node->next;
	while (node)
	{
		if (max <= node->content)
			return (0);
		max = node->content;
		node = node->next;
	}
	return (1);
}

int	ft_stack_issort(t_stack **stack)
{
	int		min;
	t_stack	*node;

	if (!stack)
		return (-1);
	node = *stack;
	if (node == NULL || node->next == NULL)
		return (-1);
	min = node->content;
	node = node->next;
	while (node)
	{
		if (min >= node->content)
			return (0);
		min = node->content;
		node = node->next;
	}
	return (1);
}
