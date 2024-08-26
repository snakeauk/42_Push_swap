#include "push_swap.h"

int ft_stackrange(t_stack *stack, int min, int max)
{
    t_stack *next;

    next = stack->next;
    while (next->sentinel != 1)
    {
        if (next->content >= min && next->content <= max)
            return (1);
        next = next->next;
    }
    return (0);
}