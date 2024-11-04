/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_argv_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:17:12 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/24 03:09:14 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

static int	ft_input_check(t_stack **stack, long num)
{
	t_stack	*node;

	node = (*stack);
	while (node)
	{
		if (node->content == num)
		{
			ft_stack_free(stack);
			return (0);
		}
		node = node->next;
	}
	return (1);
}

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

static	t_stack	*ft_stack_input(int start, int end, char **str_array)
{
	long	num;
	t_stack	*stack;

	stack = NULL;
	while (start < end)
	{
		if (!ft_isint(str_array[start]))
		{
			ft_stack_free(&stack);
			return (NULL);
		}
		num = ft_atol(str_array[start]);
		if (!ft_input_check(&stack, num))
		{
			ft_stack_free(&stack);
			return (NULL);
		}
		ft_stack_add_back(&stack, ft_stack_new(num));
		start++;
	}
	ft_stack_add_rank(&stack);
	return (stack);
}

t_stack	*ft_stack_argv_input(int argc, char **argv)
{
	char	**split;
	t_stack	*stack;

	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (!split)
		{
			ft_dprintf(STDERR_FILENO, "Error\n");
			return (NULL);
		}
		stack = ft_stack_input(0, ft_array_char_size(split), split);
		ft_array_char_free(split);
	}
	else
		stack = ft_stack_input(1, argc, argv);
	if (!stack)
	{
		ft_dprintf(STDERR_FILENO, "Error\n");
		return (NULL);
	}
	return (stack);
}
