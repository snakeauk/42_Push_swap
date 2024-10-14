/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:14 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/14 16:56:18 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*array;
	int	status;

	if (argc < 2)
	{
		ft_dprintf(STDERR_FILENO, "Error\n");
		return (EXIT_FAILURE);
	}
	array = ft_argv_input_array(argc, argv);
	if (!array)
	{
		ft_dprintf(STDERR_FILENO, "Error\n");
		return (EXIT_FAILURE);
	}
	status = ft_push_swap(&array);
	return (status);
}
