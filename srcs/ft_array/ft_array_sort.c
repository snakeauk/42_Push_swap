#include "ft_array.h"

void	ft_array_sort(int *array)
{
	int	index;
	int	check;

	index = 0;
	while (array[index])
	{
		check = index + 1;
		while (array[check])
		{
			if (array[check] < array[index])
				ft_swap(&(array[check]), &(array[index]));
			check++;
		}
		index++;
	}
}
