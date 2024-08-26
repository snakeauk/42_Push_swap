/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:12:40 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 01:30:00 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stackfree(t_stack **stack)
{
	t_stack	*cur;

	while (*stack)
	{
		cur = (*stack);
		(*stack) = (*stack)->next;
		free(cur);
	}
	return (NULL);
}
