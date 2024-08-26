#include "push_swap.h"

void    ft_sort(t_psargs *data, int size)
{
    if (ft_issorted(data->stack_a))
        ;
    else if (size < 7)
    {
        if (size <= 3)
        {
            if (size == 2)
                command_sa(data);
            else
                sort_3(data);
        }
        else
            sort_less7(data);
    }
    else
        sort_over6(data, ft_stacksize(data->stack_a));
}