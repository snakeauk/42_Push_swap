#include "push_swap.h"

void    command_pb(t_psargs *data)
{
    t_stack *node;

    if (data->stack_a->next->sentinel == 1)
        return ;
    node = ft_stackpop(data->stack_a);
    ft_stackadd_front(data->stack_b, node);
    ft_stackadd_back(data->ans, ft_stacknew(COM_PB));
}
