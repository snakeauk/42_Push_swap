/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:20:01 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:20:14 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

long	ft_stackmax(t_stack **stack)
{
	t_stack	*next;
	long	max;

	if (!(*stack))
		return (-1);
	max = (*stack)->content;
	next = (*stack)->next;
	while (next)
	{
		if (max < next->content)
			max = next->content;
		next = next->next;
	}
	return (max);
}
