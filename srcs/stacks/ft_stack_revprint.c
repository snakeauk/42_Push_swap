#include "push_swap.h"

void    ft_stack_revprint(t_stack *stack)
{
    t_stack *last;

    last = stack->prev;
    while (last->sentinel != 1)
    {
        ft_printf("%d\n", last->content);
        last = last->prev;
    }
}
