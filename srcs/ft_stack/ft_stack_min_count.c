/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_min_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:45:02 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:03 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_min_count(t_stack **stack, t_stack *min)
{
	t_stack	*node;
	int		count;

	node = *stack;
	count = 0;
	while (node && node != min)
	{
		count++;
		node = node->next;
	}
	return (count);
}
