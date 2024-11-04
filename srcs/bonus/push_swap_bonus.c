/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:21 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/24 03:44:25 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	execute_command(t_stack **stack_a, t_stack **stack_b)
{
	int		ret;
	char	*line;

	while (get_next_line(STDIN_FILENO, &line))
	{
		if (ft_iscommand(line))
		{
			ret = ft_command_execute(line, stack_a, stack_b);
			if (ret < 0)
				break ;
		}
		else
		{
			free(line);
			return (-1);
		}
		free(line);
	}
	if (ft_stack_issort(stack_a) && ft_stack_size(stack_b) == 0)
		return (EXIT_SUCCESS);
	return (EXIT_FAILURE);
}

static int	push_swap_bonus(t_stack **stack)
{
	int		status;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (*stack);
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
	int		status;
	t_stack	*stack;

	if (argc < 2)
		return (EXIT_FAILURE);
	stack = ft_stack_argv_input(argc, argv);
	if (!stack)
		return (EXIT_FAILURE);
	status = push_swap_bonus(&stack);
	if (status == EXIT_SUCCESS)
		ft_printf("OK\n");
	else if (status == EXIT_FAILURE)
		ft_printf("KO\n");
	else
	{
		ft_dprintf(STDERR_FILENO, "Error\n");
		status = EXIT_FAILURE;
	}
	return (status);
}
