/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:57 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:47:01 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_command.h"

int	ft_command_output(int cmd)
{
	if (cmd == SA)
		return (ft_printf("sa\n"));
	else if (cmd == SB)
		return (ft_printf("sb\n"));
	else if (cmd == SS)
		return (ft_printf("ss\n"));
	else if (cmd == PA)
		return (ft_printf("pa\n"));
	else if (cmd == PB)
		return (ft_printf("pb\n"));
	else if (cmd == RA)
		return (ft_printf("ra\n"));
	else if (cmd == RB)
		return (ft_printf("rb\n"));
	else if (cmd == RR)
		return (ft_printf("rr\n"));
	else if (cmd == RRA)
		return (ft_printf("rra\n"));
	else if (cmd == RRB)
		return (ft_printf("rrb\n"));
	else if (cmd == RRR)
		return (ft_printf("rrr\n"));
	else
		return (0);
}

int	ft_command_choice(int cmd, int *store)
{
	if ((cmd == SA && *store == SB) || (cmd == SB && *store == SA))
		ft_command_output(SS);
	else if ((cmd == RA && *store == RB) || (cmd == RB && *store == RA))
		ft_command_output(RR);
	else if ((cmd == RRA && *store == RRB) || (cmd == RRB && *store == RRA))
		ft_command_output(RRR);
	else
	{
		if (*store)
		{
			ft_command_output(*store);
			return (cmd);
		}
	}
	return (0);
}

void	ft_command_print(int cmd)
{
	static int	store;

	if (cmd == 0)
	{
		if (store != 0)
		{
			ft_command_output(store);
			store = 0;
		}
	}
	else
	{
		if (store != 0)
			store = ft_command_choice(cmd, &store);
		else
			store = cmd;
	}
}
