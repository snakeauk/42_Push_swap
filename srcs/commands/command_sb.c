#include "push_swap.h"

void    command_sb(t_psargs *data)
{
    if (data->stack_b->next->sentinel == 1)
        return ;
    if (data->stack_b->next->next->sentinel == 1)
        return ;
    ft_stackswap(data->stack_b);
    ft_stackadd_back(data->ans, ft_stacknew(COM_SB));
}
