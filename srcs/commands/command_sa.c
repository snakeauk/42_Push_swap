#include "push_swap.h"

void    command_sa(t_psargs *data)
{
    if (data->stack_a->next->sentinel == 1)
        return ;
    if (data->stack_a->next->next->sentinel == 1)
        return ;
    ft_stackswap(data->stack_a);
    ft_stackadd_back(data->ans, ft_stacknew(COM_SA));
}
