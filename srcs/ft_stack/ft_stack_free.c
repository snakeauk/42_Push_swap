/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:43 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:44 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_free(t_stack **stack)
{
	t_stack	*next;

	if (!stack)
		return ;
	while (*stack)
	{
		next = (*stack)->next;
		if (stack)
			free(*stack);
		*stack = next;
	}
	*stack = NULL;
}
