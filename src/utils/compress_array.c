#include "push_swap.h"

// Return NULL if an error occured
int	*compress_array(int *arr, int arr_len)
{
	int	*sorted_arr;
	int	*res;
	int	i;

	if (arr == NULL)
		return (NULL);
	sorted_arr = sort_int_arr(arr, arr_len);
	res = ft_calloc(sizeof(int), arr_len);
	if (sorted_arr == NULL || res == NULL)
	{
		free(sorted_arr);
		free(res);
		free(arr);
		return (NULL);
	}
	i = 0;
	while (i < arr_len)
	{
		res[i] = search_in_int_arr(sorted_arr, arr_len, arr[i]) - sorted_arr;
		i++;
	}
	free(sorted_arr);
	free(arr);
	return (res);
}
