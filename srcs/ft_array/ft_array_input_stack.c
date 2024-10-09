/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_input_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:46:22 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/10 00:46:25 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

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
