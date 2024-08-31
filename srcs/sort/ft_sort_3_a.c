/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:09:24 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 23:18:15 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	sort_3_a_switch_fs(t_stack **stack, t_stack **ans)
{
	long	first;
	long	third;

	first = (*stack)->content;
	third = (*stack)->next->next->content;
	if (first < third)
	{
		ft_stackswap(stack, ans, COM_SA);
		ft_stackrotate(stack, ans, COM_RA);
	}
	else
		ft_stackreverse(stack, ans, COM_RRA);
}

void	sort_3_a_switch_sf(t_stack **stack, t_stack **ans)
{
	long	first;
	long	second;
	long	third;

	first = (*stack)->content;
	second = (*stack)->next->content;
	third = (*stack)->next->next->content;
	if (first < third)
		ft_stackswap(stack, ans, COM_SA);
	else
	{
		if (second < third)
			ft_stackrotate(stack, ans, COM_RA);
		else
		{
			ft_stackswap(stack, ans, COM_SA);
			ft_stackreverse(stack, ans, COM_RRA);
		}
	}
}

void	ft_sort_3_a(t_stack **stack, t_stack **ans)
{
	long	first;
	long	second;

	first = (*stack)->content;
	second = (*stack)->next->content;
	if (first < second)
		sort_3_switch_fs(stack, ans);
	else
		sort_3_switch_sf(stack, ans);
}
