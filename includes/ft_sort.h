/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:36:18 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/14 16:50:48 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SORT_H
# define FT_SORT_H

# include "ft_array.h"
# include "ft_command.h"
# include "ft_stack.h"
# include "stack.h"
# include <stdlib.h>

typedef struct s_data
{
	int	size;
	int	blksize;
	int	blk;
	int	blk_group;
}		t_data;

int		ft_sort(t_stack **stack);
void	sort_2(t_stack **stack_a);
void	sort_3(t_stack **stack_a);
void	sort_mini(t_stack **stack_a, t_stack **stack_b);
int		sort_large(t_stack **stack_a, t_stack **stack_b);

#endif