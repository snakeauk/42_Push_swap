/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:19:09 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:19:36 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

long	ft_stackmin(t_stack **stack)
{
	t_stack	*next;
	long	min;

	if (!(*stack))
		return (-1);
	min = (*stack)->content;
	next = (*stack)->next;
	while (next)
	{
		if (min > next->content)
			min = next->content;
		next = next->next;
	}
	return (min);
}
