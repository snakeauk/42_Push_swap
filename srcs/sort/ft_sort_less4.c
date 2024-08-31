/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_less4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:23:02 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:26:28 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	ft_sort_less4a(t_stack **stack_a, t_stack **ans, int size)
{
	if (size == 0)
		return ;
	else if (size == 1)
		return ;
	else if (size == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ft_stackswap(*stack_a, ans, COM_SA);
		return ;
	}
	else if (size == 3)
	{
		ft_sort_3_select(stack_a, ans);
		return ;
	}
}