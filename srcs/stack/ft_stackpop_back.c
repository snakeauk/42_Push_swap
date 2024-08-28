/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:50:52 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 17:58:55 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

long	*ft_stackpop_back(t_stack **stack)
{
	long	ret;
	t_stack	*node;

	if (!(*stack) || (*stack)->next == NULL)
		return (NULL);
	node = ft_stacklast(stack);
	ret = node->content;
	free(node);
	return (ret);
}
