/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:38:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 03:10:36 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*input_to_stack(int argc, char **argv);
int		input_duplication_checker(int argc, char **argv);
int		input_duplication_checker(int argc, char **argv);

t_stack	*input_to_stack(int argc, char **argv)
{
	t_stack	*stack;

	if (!input_is_degit_checker(argc, argv))
		ft_error(STDERR_FILENO);
	if (!input_duplication_checker(argc, argv))
		ft_error(STDERR_FILENO);
	stack = ft_stackinput(argc, argv);
	return (stack);
}

int	input_is_degit_checker(int argc, char **argv)
{
	int	count;
	int	index;
	int	length;

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
		count++;
	}
	return (1);
}

int	input_duplication_checker(int argc, char **argv)
{
	int		index;
	int		check;
	long	num;

	index = 1;
	while (index < argc - 1)
	{
		num = ft_atol(argv[index]);
		check = index + 1;
		while (check < argc)
		{
			if (ft_atol(argv[check]) == num)
				return (0);
			check++;
		}
		index++;
	}
	return (1);
}
