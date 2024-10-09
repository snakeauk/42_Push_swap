/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:21 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/10 01:06:30 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	execute_command(t_stack **stack_a, t_stack **stack_b)
{
	int		ret;
	char	*line;

	while (1)
	{
		line = get_next_line(STDIN_FILENO);
		if (!line)
			break ;
		if (ft_iscommand(line))
		{
			ret = ft_command_execute(line, stack_a, stack_b);
			if (ret < 0)
				break ;
			if (ft_stack_issort(stack_a) && ft_stack_size(stack_b) == 0)
			{
				free(line);
				return (EXIT_SUCCESS);
			}
		}
		else
			break ;
		free(line);
	}
	free(line);
	return (EXIT_FAILURE);
}

static int	push_swap_bonus(int **array)
{
	int		status;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = ft_stack_create(array);
	if (!stack_a)
		return (EXIT_FAILURE);
	if (ft_stack_issort(&stack_a))
		return (EXIT_SUCCESS);
	stack_b = NULL;
	status = execute_command(&stack_a, &stack_b);
	if (ft_stack_size(&stack_a) != 0)
		ft_stack_free(&stack_a);
	if (ft_stack_size(&stack_b) != 0)
		ft_stack_free(&stack_b);
	return (status);
}

int	main(int argc, char **argv)
{
	int	status;
	int	*array;

	if (argc < 2)
		return (EXIT_FAILURE);
	array = ft_argv_input_array(argc, argv);
	if (!array)
		return (EXIT_FAILURE);
	status = push_swap_bonus(&array);
	if (status == EXIT_SUCCESS)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free(array);
	return (status);
}
