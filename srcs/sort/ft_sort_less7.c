/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_less7.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:18:24 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:25:28 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

long	ft_stackmin_next(t_stack **stack, long min)
{
	long	ret;
	t_stack	*next;

	if (!(*stack))
		return (-1);
	ret = ft_stackmax(stack);
	while (next)
	{
		if (ret > next->content && next->content > min)
			ret = next->content;
		next = next->next;
	}
	return (ret);
}

void	ft_sort_less7(t_stack **stack_a, t_stack **stack_b, t_stack **ans)
{
	long	dip;
	int		count;
	long	dip;
	int		size;

	count = 0;
	dip = ft_stackmin(stack_a);
	while (++count <= 2)
		dip = ft_stackmin_next(stack_a, dip);
	count = -1;
	size = ft_stacksize(stack_a);
	while (++count < size)
	{
		if ((*stack_a)->content <= dip)
			ft_stackpush(stack_a, stack_b, ans, COM_PB);
		else
			ft_stackrotate(stack_a, ans, COM_RA);
	}
	ft_sort_less4a(stack_a, ans);
	ft_sort_less4b(stack_b, ans);
	ft_stackpush(stack_b, stack_a, ans, COM_PA);
	ft_stackpush(stack_b, stack_a, ans, COM_PA);
	ft_stackpush(stack_b, stack_a, ans, COM_PA);
}
