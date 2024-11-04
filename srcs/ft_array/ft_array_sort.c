/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:42:48 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/23 19:16:05 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_array_sort(int *array, int size)
{
	int	index;
	int	check;

	index = 0;
	while (index < size - 1)
	{
		check = index + 1;
		while (check < size)
		{
			if (array[check] < array[index])
				ft_swap(&(array[check]), &(array[index]));
			check++;
		}
		index++;
	}
}
