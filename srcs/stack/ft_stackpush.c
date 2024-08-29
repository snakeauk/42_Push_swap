/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:07:37 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 00:15:38 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	ft_stackpush(t_stack **from, t_stack **to, t_stack **ans, int command)
{
	long	content;

	content = ft_stackpop_front(from);
	ft_stackadd_front(to, ft_stacknew(content));
	ft_stackadd_back(ans, ft_stacknew(command));
}
