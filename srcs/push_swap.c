/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:10 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/14 16:56:12 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_swap(int **array)
{
	t_stack	*stack;
	int		status;

	stack = ft_stack_create(array);
	free(*array);
	if (!stack)
	{
		ft_dprintf(STDERR_FILENO, "Error\n");
		return (EXIT_FAILURE);
	}
	status = ft_sort(&stack);
	return (status);
}
