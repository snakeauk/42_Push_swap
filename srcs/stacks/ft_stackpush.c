#include "push_swap.h"

void ft_stackpush(t_stack *stack1, t_stack *stack2)
{
    t_stack *node;

    if (stack1->next->sentinel == 1)
        return ;
    node = ft_stackpop(stack1);
    ft_stackadd_front(stack2, node);
}