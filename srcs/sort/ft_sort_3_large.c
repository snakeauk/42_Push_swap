/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:29:33 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:28:10 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	ft_swap_second_third(t_stack **stack, t_stack **ans)
{
	ft_stackrotate(stack, ans, COM_RA);
	ft_stackswap(stack, ans, COM_SA);
	ft_stackreverse(stack, ans, COM_RRA);
}

void	ft_sort_large_3_stf(t_stack **stack, t_stack **ans)
{
	ft_swap_second_third(stack, ans);
	ft_stackswap(stack, ans, COM_SA);
}

void	ft_sort_large_3_tfs(stack, ans)
{
	ft_stackswap(stack, ans, COM_SA);
	ft_swap_second_third(stack, ans);
}

void	ft_sort_3_a_large(t_stack **stack, t_stack **ans)
{
	long	first;
	long	second;
	long	third;

	first = (*stack)->content;
	second = (*stack)->next->content;
	third = (*stack)->next->next->content;
	if (first < third && third < second)
		ft_swap_second_third(stack, ans);
	else if (first > second && first < third)
		ft_stackswap(stack, ans, COM_SA);
	else if (first < second && first > third)
		ft_sort_large_3_stf(stack, ans);
	else if (first > third && second < third)
		ft_sort_large_3_tfs(stack, ans);
	else if (first > second && second > third)
	{
		ft_stackswap(stack, ans, COM_RA);
		ft_sort_large_3_stf(stack, ans);
	}
}
