/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:36:38 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 14:40:08 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stacklast(t_stack **stack)
{
	t_stack	*last;

	if (!(*stack) || (*stack)->next == NULL)
		return (NULL);
	last = (*stack);
	while (last->next)
		last = last->next;
	return (last);
}
