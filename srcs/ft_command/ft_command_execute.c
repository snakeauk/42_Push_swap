/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_execute.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:54 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:42:55 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_command.h"

static int	ft_execute_swap(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	int	ret;

	ret = 0;
	if (ft_strncmp(cmd, "sa\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_sa(stack_a);
		if (ret != SA)
			return (-1);
	}
	else if (ft_strncmp(cmd, "sb\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_sb(stack_b);
		if (ret != SB)
			return (-1);
	}
	else if (ft_strncmp(cmd, "ss\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_sa(stack_a);
		if (ret != SA)
			return (-1);
		ret = ft_command_sb(stack_b);
		if (ret != SB)
			return (-1);
	}
	return (EXIT_SUCCESS);
}

static int	ft_execute_push(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	int	ret;

	ret = 0;
	if (ft_strncmp(cmd, "pa\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_pa(stack_a, stack_b);
		if (ret != PA)
			return (-1);
	}
	else if (ft_strncmp(cmd, "pb\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_pb(stack_a, stack_b);
		if (ret != PB)
			return (-1);
	}
	return (EXIT_SUCCESS);
}

static int	ft_execute_rotate(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	int	ret;

	ret = 0;
	if (ft_strncmp(cmd, "ra\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_ra(stack_a);
		if (ret != RA)
			return (-1);
	}
	else if (ft_strncmp(cmd, "rb\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_rb(stack_b);
		if (ret != RB)
			return (-1);
	}
	else if (ft_strncmp(cmd, "rr\n", 3) == 0 && ft_strlen(cmd) == 3)
	{
		ret = ft_command_ra(stack_a);
		if (ret != RA)
			return (-1);
		ret = ft_command_rb(stack_b);
		if (ret != RB)
			return (-1);
	}
	return (EXIT_SUCCESS);
}

static int	ft_execute_reverse(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	int	ret;

	ret = 0;
	if (ft_strncmp(cmd, "rra\n", 4) == 0 && ft_strlen(cmd) == 4)
	{
		ret = ft_command_rra(stack_a);
		if (ret != RRA)
			return (-1);
	}
	else if (ft_strncmp(cmd, "rrb\n", 4) == 0 && ft_strlen(cmd) == 4)
	{
		ret = ft_command_rrb(stack_b);
		if (ret != RRB)
			return (-1);
	}
	else if (ft_strncmp(cmd, "rrr\n", 4) == 0 && ft_strlen(cmd) == 4)
	{
		ret = ft_command_rra(stack_a);
		if (ret != RRA)
			return (-1);
		ret = ft_command_rrb(stack_b);
		if (ret != RRB)
			return (-1);
	}
	return (EXIT_SUCCESS);
}

int	ft_command_execute(char *cmd, t_stack **stack_a, t_stack **stack_b)
{
	int	ret;

	ret = 0;
	if (ft_iscommand_swap(cmd))
		ret = ft_execute_swap(cmd, stack_a, stack_b);
	else if (ft_iscommand_push(cmd))
		ret = ft_execute_push(cmd, stack_a, stack_b);
	else if (ft_iscommand_rotate(cmd))
		ret = ft_execute_rotate(cmd, stack_a, stack_b);
	else if (ft_iscommand_reverse(cmd))
		ret = ft_execute_reverse(cmd, stack_a, stack_b);
	else
		return (EXIT_FAILURE);
	if (ret < 0)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
