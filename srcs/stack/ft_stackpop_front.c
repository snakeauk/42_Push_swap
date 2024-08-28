/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:47:14 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 17:58:09 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

long	*ft_stackpop_front(t_stack **stack)
{
	long	ret;
	t_stack	*node;

	node = (*stack);
	(*stack) = (*stack)->next;
	ret = node->content;
	free(node);
	return (ret);
}
