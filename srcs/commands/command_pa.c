#include "push_swap.h"

void    command_pa(t_psargs *data)
{
    t_stack *node;

    if (data->stack_b->next->sentinel == 1)
        return ;
    node = ft_stackpop(data->stack_b);
    ft_stackadd_front(data->stack_a, node);
    ft_stackadd_back(data->ans, ft_stacknew(COM_PA));
}
