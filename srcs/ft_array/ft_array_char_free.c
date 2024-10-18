/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_char_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:21:42 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/18 21:21:43 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_array_char_free(char **str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index])
			free(str[index]);
		index++;
	}
	free(str);
}
