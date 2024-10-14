/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:15 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/14 17:51:23 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

int	ft_sort(t_stack **stack)
{
	int		status;
	int		size;
	t_stack	*stack_a;
	t_stack	*stack_b;

	status = EXIT_SUCCESS;
	if (ft_stack_issort(stack))
		return (status);
	stack_a = (*stack);
	stack_b = NULL;
	size = ft_stack_size(&stack_a);
	if (size <= 2)
		sort_2(&stack_a);
	else if (size == 3)
		sort_3(&stack_a);
	else if (size <= 6)
		sort_mini(&stack_a, &stack_b);
	else
		status = sort_large(&stack_a, &stack_b);
	ft_command_print(0);
	ft_stack_free(&stack_b);
	return (status);
}
