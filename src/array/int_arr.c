#include "push_swap.h"

int	*duplicate_int_arr(int *original, int arr_len)
{
	int	*res;
	int	i;

	res = ft_calloc(sizeof(int), arr_len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < arr_len)
	{
		res[i] = original[i];
		i++;
	}
	return (res);
}

int	*search_in_int_arr(int *arr, int arr_len, int target)
{
	int	l;
	int	r;
	int	m;

	l = 0;
	r = arr_len;
	while (l != r - 1)
	{
		m = (l + r) / 2;
		if (target < arr[m])
			r = m;
		else
			l = m;
	}
	if (arr[l] != target)
		return (NULL);
	return (&arr[l]);
}
