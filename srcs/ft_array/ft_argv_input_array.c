/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_input_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:46:06 by kinamura          #+#    #+#             */
/*   Updated: 2024/10/18 21:21:16 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

static int	ft_input_check(int **array)
{
	size_t	index;
	size_t	check;

	index = 0;
	while ((*array)[index])
	{
		check = index + 1;
		while ((*array)[check])
		{
			if ((*array)[check] == (*array)[index])
				return (0);
			check++;
		}
		index++;
	}
	return (1);
}

int	*ft_argv_input_array(int argc, char **argv)
{
	char	**split;
	int		*array;

	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (!split)
			return (NULL);
		array = ft_array_input(0, ft_array_char_size(split), split);
		ft_array_char_free(split);
	}
	else
		array = ft_array_input(1, argc, argv);
	if (!array)
		return (NULL);
	if (!ft_input_check(&array))
	{
		free(array);
		return (NULL);
	}
	return (array);
}
