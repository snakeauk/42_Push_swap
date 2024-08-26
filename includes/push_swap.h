/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:22:35 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 02:05:52 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"

# include "ft_stack.h"
# include "ft_utils.h"

// main.c
int		main(int argc, char **argv);

// input_to_stack.c
input_is_degit_checker(int argc, char **argv);
t_stack	*input_to_stack(int argc, char **argv);

#endif