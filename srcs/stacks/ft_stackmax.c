#include "push_swap.h"

int ft_stackmax(t_stack *stack)
{
    int max;
    t_stack *next;

    next = stack->next;
    max = next->content;
    while (next->sentinel != 1)
    {
        if (next->content > max)
            max = next->content;
        next =  next->next;
    }
    return (max);
}
