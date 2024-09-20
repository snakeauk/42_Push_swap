#include "push_swap.h"

int	*sort_int_arr(int *arr, int arr_len)
{
	int	*res;
	int	i;
	int	j;
	int	tmp;

	res = duplicate_int_arr(arr, arr_len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < arr_len)
	{
		j = 1;
		while (j < arr_len)
		{
			if (res[j] < res[j - 1])
			{
				tmp = res[j];
				res[j] = res[j - 1];
				res[j - 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (res);
}
