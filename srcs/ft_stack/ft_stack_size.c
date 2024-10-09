/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:45:35 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:36 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_size(t_stack **stack)
{
	int		count;
	t_stack	*node;

	if (!stack)
		return (-1);
	count = 0;
	node = (*stack);
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
