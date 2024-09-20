#include "push_swap.h"

int	*ft_atoi_arr(char **str_arr, int *iserr)
{
	int	arr_len;
	int	*res;
	int	i;

	arr_len = 0;
	while (str_arr[arr_len] != NULL)
		arr_len++;
	res = ft_calloc(sizeof(int), arr_len);
	i = 0;
	if (res == NULL)
		return (NULL);
	while (i < arr_len)
	{
		res[i] = ft_atoi_ex(str_arr[i], iserr);
		i++;
	}
	return (res);
}
