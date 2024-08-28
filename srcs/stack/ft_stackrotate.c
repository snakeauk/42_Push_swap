/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:52:11 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 17:57:26 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stackrotate(t_stack **stack, t_stack **ans, int command)
{
	long	content;

	if (!(*stack) || (*stack)->next == NULL)
		return ;
	content = ft_stackpop_front(stack);
	ft_stackadd_back(stack, ft_stacknew(content));
	ft_stackadd_back(ans, ft_stacknew(command));
}
