/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_select.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:16:41 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 15:23:09 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	ft_sort_select(t_stack **stack_a, t_stack **stack_b,
			t_stack **ans, int size)
{
	int	index;

	if (size <= 3)
	{
		ft_sort_less4a(stack_a, ans, size);
		return ;
	}
	if (ft_stacksize(stack_a) < 7)
	{
		ft_sort_7(stack_a, stack_b, ans);
		return ;
	}
	ft_quicksort(stack_a, stack_b, size);
}
