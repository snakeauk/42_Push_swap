/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:23:45 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 01:34:52 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

typedef struct s_stack
{
	struct s_stack	*prev;
	long			content;
	struct s_stack	*next;
}	t_stack;

int		ft_issorted(t_stack *stack);

t_stack	*ft_stackfree(t_stack **stack);


#endif