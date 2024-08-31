/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:10:16 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:24:39 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	sort_3_b_switch_fs(t_stack **stack, t_stack **ans)
{
	long	first;
	long	third;

	first = (*stack)->content;
	third = (*stack)->next->next->content;
	if (first < third)
	{
		ft_stackswap(stack, ans, COM_SB);
		ft_stackrotate(stack, ans, COM_RB);
	}
	else
		ft_stackreverse(stack, ans, COM_RRA);
}

void	sort_3_b_switch_sf(t_stack **stack, t_stack **ans)
{
	long	first;
	long	second;
	long	third;

	first = (*stack)->content;
	second = (*stack)->next->content;
	third = (*stack)->next->next->content;
	if (first < third)
		ft_stackswap(stack, ans, COM_SB);
	else
	{
		if (second < third)
			ft_stackrotate(stack, ans, COM_RB);
		else
		{
			ft_stackswap(stack, ans, COM_SB);
			ft_stackreverse(stack, ans, COM_RRB);
		}
	}
}

void	ft_sort_3_b(t_stack **stack, t_stack **ans)
{
	long	first;
	long	second;

	first = (*stack)->content;
	second = (*stack)->next->content;
	if (first < second)
		sort_3_b_switch_fs(stack, ans);
	else
		sort_3_b_switch_sf(stack, ans);
}

void	ft_sort_less4b(t_stack **stack_b, t_stack **ans, int size)
{
	if (size == 0)
		return ;
	else if (size == 1)
		return ;
	else if (size == 2)
	{
		if ((*stack_b)->content > (*stack_b)->next->content)
			ft_stackswap(*stack_b, ans, COM_SB);
		return ;
	}
	else if (size == 3)
	{
		ft_sort_3_b(stack_b, ans);
		return ;
	}
}