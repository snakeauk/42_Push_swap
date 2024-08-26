/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:08:58 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 03:01:25 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

    if (argc == 1)
        ft_error(EXIT_FAILURE);
    stack_b = NULL;
    stack_a = input_to_stack(argc, argv);
    if (!stack_a)
        ft_error(EXIT_FAILURE);
    if (ft_issorted(stack_a) == 1)
    {
        ft_stackfree(&stack_a);
        return(0);
    }
    ft_stackfree(&stack_a);
    ft_stackfree(&stack_b);
    return (0);
}