/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:35:14 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 01:35:35 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_issorted(t_stack *stack)
{
	long	cur;

	if (!stack)
		return (-1);
	cur = LONG_MIN;
	while (stack)
	{
		if (stack->content >= cur)
		{
			cur = stack->content;
			stack = stack->next;
		}
		else
			return (0);
	}
	return (1);
}
