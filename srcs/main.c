/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:14 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/22 19:00:45 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		status;

	if (argc < 2)
		return (EXIT_FAILURE);
	stack = ft_stack_argv_input(argc, argv);
	if (!stack)
		return (EXIT_FAILURE);
	status = ft_push_swap(&stack);
	return (status);
}
