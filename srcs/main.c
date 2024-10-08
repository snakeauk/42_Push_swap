#include "push_swap.h"

int main(int argc, char **argv)
{
    int 	*array;
    int     status;

    if (argc < 2)
        return (EXIT_FAILURE);
    array = ft_array_input(argc, argv);
    if (!array)
        return (EXIT_FAILURE);
	status = ft_push_swap(&array);
    free(array);
    return (status);
}
