/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:41 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/24 03:09:00 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

int	*ft_array_input_array(int start, int end, char **str_array)
{
	int	*array;
	int	size;
	int	index;

	size = end - start;
	array = (int *)malloc(sizeof(int) * (size));
	if (!array)
		return (NULL);
	index = 0;
	while (index < size)
	{
		if (!ft_isint(str_array[start]))
		{
			ft_dprintf(STDERR_FILENO, "Error\n");
			free(array);
			return (NULL);
		}
		array[index] = ft_atol(str_array[start]);
		start++;
		index++;
	}
	return (array);
}
