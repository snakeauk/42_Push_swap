/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:14:55 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 03:17:32 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stackinput(int argc, char **argv)
{
	long	num;
	int		index;
	t_stack	*stack;

	stack = NULL;
	index = 1;
	while (index < argc)
	{
		num = ft_atol(argv[index]);
		if (num < (long)INT_MIN || num > (long)INT_MAX)
			return (ft_stackfree(&stack));
		ft_stackadd_back(&stack, ft_stacknew(num));
		if (!stack)
			return (NULL);
		index++;
	}
	return (stack);
}
