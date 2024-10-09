/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:36:24 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/09 23:41:02 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include "ft_stack.h"
# include "stack.h"
# include <stdlib.h>

int		*ft_array_input(int argc, char **argv);
int		*ft_array_input_stack(t_stack **stack);
void	ft_array_sort(int *array);

#endif