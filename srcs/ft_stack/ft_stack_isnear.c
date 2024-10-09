/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_isnear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:46 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:47 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

bool	ft_stack_isnear(t_stack **stack, int rank)
{
	t_stack	*node;
	int		index;
	int		half_size;

	node = *stack;
	index = 0;
	half_size = rank / 2;
	while (index < half_size)
	{
		if (node->rank == rank)
			return (true);
		node = node->next;
		index++;
	}
	return (false);
}
