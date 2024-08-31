/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:28:35 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 18:28:35 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort.h"

void	ft_sort_3(t_stack **stack, t_stack **ans)
{
	if (ft_stacksize(stack) == 3)
		ft_sort_3_a(stack, ans);
	else
		ft_sort_3_a_large(stack, ans);
}
