/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:24:13 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/31 00:46:24 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

// long	*ft_arrayinput_stack(t_stack **stack)
// {
// 	long	*ret;
// 	size_t	index;
// 	size_t	size;
// 	t_stack *cur;

// 	size = (size_t)ft_stacksize(stack);
// 	ret = (long *)malloc(sizeof(long) * size);
// 	index = 0;
// 	cur = (*stack);
// 	while (index < size)
// 	{
// 		ret[index] = cur->content;
// 		cur = cur->next;
// 		index++;
// 	}
// 	return (ret);
// }
// void	ft_arraysort(long *array, int size)
// {
// 	int	index;
// 	int	check;
// 	index = 0;
// 	while (index < size - 1)
// 	{
// 		check = index + 1;
// 		while (check < size)
// 		{
// 			if (array[check] < array[index])
// 				swap(&array[check], &array[index]);
// 			check++;
// 		}
// 		index++;
// 	}
// }
// void	ft_stackback(t_stack **stack_a, t_stack **stack_b, t_stack **ans, long *arr, int *sep)
// {
// 	int	size;
// 	ft_stackbacksort(stack_a, stack_b, ans, arr, sep[1]);
// 	size = ft_stacksize(stack_b);
// 	while (size < sep[3])
// 	ft_stackbacksort(stack_a, stack_b, ans, arr, sep[4]);
// }
// void	ft_set_sep_array(int **sep)
// {
// 	int sep_count;
// 	sep_count = 6;
// 	*sep[3] = *sep[0] / sep_count;
// 	*sep[1] = (*sep[0] % sep_count) / 2;
// 	*sep[5] = (*sep[0] % sep_count) / 2;
// 	*sep[2] = (*sep[0] / sep_count) / 2;
// 	*sep[4] = (*sep[0] / sep_count) / 2;
// }
// void	ft_stackseparate(t_stack **stack_a, t_stack **stack_b, t_stack **ans, long *arr, int *sep)
// {
// 	int	size;
// 	int index;
// 	index = 0;
// 	while (ft_stacksize(stack_a) > 1)
// 	{
// 		size = ft_stacksize(stack_a);
// 		while (index < size)
// 		{
// 			if ((*stack_a)->content >= arr[sep[2]] && (*stack_a)->content <= arr[sep[4]])
// 			{
// 				ft_stackpush(stack_a, stack_b, ans, COM_PB);
// 				if ((*stack_b)->content < arr[sep[3]])
// 					ft_stackswap(stack_b, ans, COM_SB);
// 			}
// 			index++;
// 		}
// 	}
// }

int ft_command_count_next(t_stack **stack, long serch)
{
	t_stack *node;
	int next;

	next = 0;
	node = *stack;
	while (node)
	{
		if (node->content == serch)
			break;
		next++;
		node->next;
	}
	return (next);
}

int ft_command_count_prev(t_stack **stack, long serch)
{
	t_stack *node;
	int prev;

	prev = 1;
	node = ft_stacklast(stack);
	while (node)
	{
		s if (node->content == serch) break;
		prev++;
		node->next;
	}
	return (prev);
}

int ft_command_serch(t_stack **stack, long serch)
{
	t_stack *node;
	int next;
	int prev;

	next = ft_command_count_next(stack, serch);
	prev = ft_command_count_prev(stack, serch);
	return (ft_min(next, prev));
}

void ft_command_optimize(t_stack **stack_a, t_stack **stack_b, t_stack **ans, long search)
{
	int next;
	int prev;

	next = ft_command_count_next(stack_a, search);
	prev = ft_command_count_prev(stack_a, search);
	if (next < prev)
	{
		while ((*stack_a)->content != search)
			ft_stackrotate(stack_a, ans, COM_RA);
		ft_stackpush(stack_a, stack_b, ans, COM_PB);
	}
	else
	{
		while ((*stack_a)->content != search)
			ft_stackreverse(stack_a, ans, COM_RRA);
		ft_stackpush(stack_a, stack_b, ans, COM_PB);
	}
}

void ft_sort_large(t_stack **stack_a, t_stack **stack_b, t_stack **ans, t_stack **arr)
{
	long max;
	long min;
	int max_count;
	int min_count;

	max = ft_stacksize(stack_a);
	min = 0;
	while (ft_stacksize(stack_a) != 0)
	{
		max_count = ft_command_count(stack_a, arr[max]);
		min_count = ft_command_count(stack_a, arr[min]);
		if (min_count < max_count)
		{
			ft_command_optimize(stack_a, stack_b, ans, arr[min]);
			min++;
		}
		else
		{
			ft_command_optimize(stack_a, stack_b, ans, arr[max]);
			max++;
		}
	}
}

void ft_sort_back(t_stack **stack_a, t_stack **stack_b, t_stack **ans)
{
	while (ft_stacksize(stack_b) != 0)
		ft_stackpush(stack_b, stack_a, ans, COM_PA);
}

void ft_quicksort(t_stack **stack_a, t_stack **stack_b, t_stack **ans)
{
	long *arr;
	long sep[6];

	arr = ft_arrayinput_stack(stack_a);
	if (!arr)
		return (ft_error(EXIT_FAILURE));
	ft_arraysort(arr, ft_stacksize(stack_a));
	sep[0] = ft_stacksize(stack_a);
	ft_set_sep_array(&sep);
	ft_sort_large(stack_a, stack_b, ans, arr);
	ft_sort_back(stack_a, stack_b, ans);
}
