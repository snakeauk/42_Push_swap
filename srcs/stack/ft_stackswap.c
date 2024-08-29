/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:06:12 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 16:48:47 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackswap(t_stack **stack, t_stack **ans, int command)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
		return ;
	ft_swap(&((*stack)->content), &((*stack)->next->content));
	if (command)
		ft_stackadd_back(ans, ft_stacknew(command));
}
