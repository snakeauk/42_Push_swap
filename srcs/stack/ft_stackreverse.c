/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackreverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:07:10 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/28 18:06:50 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void    ft_stackreverse(t_stack **stack, t_stack **ans, int command)
{
    long    content;

    if (!(*stack) || (*stack)->next == NULL)
        return;
    content = ft_stackpop_back(stack);
    ft_stackadd_front((*stack), ft_stacknew(content));
    ft_stackadd_back(ans, ft_stacknew(command));
}
