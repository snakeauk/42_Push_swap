/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:38:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 01:48:56 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

input_degit_checker(int argc, char **argv)
{
	size_t	count;
	size_t	index;
	int		length;

	count = 1;
	while (count < argc)
	{
		index = 0;
		length = ft_strlen(argv[count]);
		if (length == 0)
			return (0);
		if (ft_issign(argv[count][0]))
		{
			if (length == 1)
				return (0);
			index++;
		}
		while (index < length)
		{
			if (!ft_isdigit(argv[count][index]))
				return (0);
		}
	}
	return (1)
}

t_stack	*input_to_stack(int argc, char **argv)
{
	t_stack	*stack;

	if (!input_degit_checker(argc, argv))
		ft_error(STDERR_FILENO);
	stack = arg_to_stack(argc, argv);
	return (stack);
}
