/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:23:45 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/27 03:17:00 by kinamura         ###   ########.fr       */
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
	long			content;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

int		ft_issorted(t_stack *stack);
void	ft_stackadd_back(t_stack **stack, t_stack *new);
t_stack	*ft_stackfree(t_stack **stack);
t_stack	*ft_stackinput(int argc, char **argv);
t_stack	*ft_stacknew(long content);

#endif