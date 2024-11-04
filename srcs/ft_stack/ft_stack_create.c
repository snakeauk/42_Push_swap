/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:44:28 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/23 23:22:44 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static void	ft_stack_add_rank(t_stack **stack)
{
	t_stack	*node;
	int		*array;
	int		index;

	array = ft_array_input_stack(stack);
	if (!array)
		return ;
	ft_array_sort(array, ft_stack_size(stack));
	node = (*stack);
	while (node)
	{
		index = 0;
		while (index < ft_stack_size(stack))
		{
			if (array[index] == node->content)
			{
				node->rank = index + 1;
				break ;
			}
			index++;
		}
		node = node->next;
	}
	free(array);
}

t_stack	*ft_stack_create(int **array)
{
	t_stack	*stack;
	t_stack	*node;
	size_t	index;

	index = 0;
	stack = NULL;
	while ((*array)[index])
	{
		node = ft_stack_new((*array)[index]);
		ft_stack_add_back(&stack, node);
		index++;
	}
	ft_stack_add_rank(&stack);
	return (stack);
}
