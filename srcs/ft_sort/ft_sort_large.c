/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_large.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:43:54 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:43:55 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

static void	handle_max(t_stack **stack_a, t_stack **stack_b, int *max,
		int *pushed)
{
	ft_command_print(ft_command_pa(stack_a, stack_b));
	(*max)--;
	if (*pushed == 1)
	{
		(*max)--;
		*pushed = 0;
		ft_command_print(ft_command_sa(stack_a));
	}
	else if (*pushed == 2)
	{
		*max -= 2;
		*pushed = 0;
		ft_command_print(ft_command_sa(stack_a));
		ft_command_print(ft_command_rra(stack_a));
	}
}

static void	push_back(t_stack **stack_a, t_stack **stack_b, int max)
{
	int		pushed;
	t_stack	*first_node;

	pushed = 0;
	while (ft_stack_size(stack_b) > 0)
	{
		first_node = *stack_b;
		if (first_node->rank == max)
			handle_max(stack_a, stack_b, &max, &pushed);
		else if (first_node->rank == max - 2 && pushed == 1)
		{
			ft_command_print(ft_command_pa(stack_a, stack_b));
			ft_command_print(ft_command_ra(stack_a));
			pushed = 2;
		}
		else if (first_node->rank == max - 1)
		{
			ft_command_print(ft_command_pa(stack_a, stack_b));
			pushed = 1;
		}
		else if (ft_stack_isnear(stack_b, max))
			ft_command_print(ft_command_rb(stack_b));
		else
			ft_command_print(ft_command_rrb(stack_b));
	}
}

static void	divide_stack(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	int	max;

	max = (data->size / data->blk) * data->blk_group;
	if (data->blk_group == data->blk)
		max = data->size - 3;
	while (data->blk_group <= data->blk && ft_stack_size(stack_b) < max)
	{
		if ((*stack_a)->rank <= max)
		{
			ft_command_print(ft_command_pb(stack_a, stack_b));
			if (ft_stack_size(stack_b) > 1 && (*stack_b)->rank > max
				- data->blksize)
				ft_command_print(ft_command_rb(stack_b));
		}
		else
			ft_command_print(ft_command_ra(stack_a));
	}
	data->blk_group++;
	if (ft_stack_size(stack_a) == 3)
		sort_3(stack_a);
	if (data->blk_group <= data->blk)
		divide_stack(stack_a, stack_b, data);
}

void	sort_large(t_stack **stack_a, t_stack **stack_b)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
	{
		ft_stack_free(stack_a);
		ft_stack_free(stack_b);
		exit(1);
	}
	data->blk_group = 1;
	data->size = ft_stack_size(stack_a);
	if (data->size <= 100)
		data->blk = 4;
	else
		data->blk = 8;
	data->blksize = (data->size / data->blk) / 2;
	divide_stack(stack_a, stack_b, data);
	push_back(stack_a, stack_b, ft_stack_size(stack_b));
	free(data);
}
