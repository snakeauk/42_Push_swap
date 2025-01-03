/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:36:24 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/23 19:16:44 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include "ft_stack.h"
# include "stack.h"
# include <stdlib.h>

int		*ft_argv_input_array(int argc, char **argv);
void	ft_array_char_free(char **str);
int		ft_array_char_size(char **array);
int		*ft_array_input_array(int start, int end, char **str_array);
int		*ft_array_input_stack(t_stack **stack);
void	ft_array_sort(int *array, int size);

#endif