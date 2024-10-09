/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_less_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:04 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:44:06 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	sort_2(t_stack **stack_a)
{
	int	first;
	int	second;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	if (first > second)
		ft_command_print(ft_command_sa(stack_a));
}

void	sort_3(t_stack **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first > second && second < third && first < third)
		ft_command_print(ft_command_sa(stack_a));
	else if (first > second && second > third && first > third)
	{
		ft_command_print(ft_command_sa(stack_a));
		ft_command_print(ft_command_rra(stack_a));
	}
	else if (first > second && second < third && first > third)
		ft_command_print(ft_command_ra(stack_a));
	else if (first < second && second > third && first < third)
	{
		ft_command_print(ft_command_sa(stack_a));
		ft_command_print(ft_command_ra(stack_a));
	}
	else if (first < second && second > third && first > third)
		ft_command_print(ft_command_rra(stack_a));
}
