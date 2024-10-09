/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:41 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:42:42 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

static int	ft_input_check(int **array)
{
	size_t	index;
	size_t	check;

	index = 0;
	while ((*array)[index])
	{
		check = index + 1;
		while ((*array)[check])
		{
			if ((*array)[check] == (*array)[index])
				return (0);
			check++;
		}
		index++;
	}
	return (1);
}

int	*ft_array_input(int argc, char **argv)
{
	int	*array;
	int	count;
	int	value;

	array = (int *)malloc(sizeof(int) * (argc - 1));
	if (!array)
		return (NULL);
	count = 1;
	while (count < argc)
	{
		if (!ft_isint(argv[count]))
		{
			free(array);
			return (NULL);
		}
		value = ft_atol(argv[count]);
		array[count - 1] = value;
		count++;
	}
	if (!ft_input_check(&array))
	{
		free(array);
		return (NULL);
	}
	return (array);
}

int	*ft_array_input_stack(t_stack **stack)
{
	int		*ret;
	int		size;
	int		index;
	t_stack	*node;

	size = ft_stack_size(stack);
	ret = (int *)malloc(sizeof(int) * size);
	if (!ret)
		return (NULL);
	index = 0;
	node = (*stack);
	while (index < size)
	{
		ret[index] = node->content;
		node = node->next;
		index++;
	}
	return (ret);
}
