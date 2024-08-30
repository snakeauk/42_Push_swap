/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:23:45 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/29 17:21:57 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SORT_H
# define FT_SORT_H

# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"
# include "ft_stack.h"
# include "ft_utils.h"

# define COM_SA 1
# define COM_SB 2
# define COM_SS 3
# define COM_PA 4
# define COM_PB 5
# define COM_RA 6
# define COM_RB 7
# define COM_RR 8
# define COM_RRA 9
# define COM_RRB 10
# define COM_RRR 11

// ft_sort_3_a_large
void	ft_sort_3_a_large(t_stack **stack, t_stack **ans);

// ft_sort_select.c
void	ft_sort_select(t_stack **stack_a,
			t_stack **stack_b, t_stack **ans, int size);

// ft_sort_less4.c
void	ft_sort_less4(t_stack **stack_a, t_stack **ans, int size);

#endif