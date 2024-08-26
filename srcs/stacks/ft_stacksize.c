#include "push_swap.h"

int ft_stacksize(t_stack *stack)
{
    int     count;
    t_stack *next;

    count = 0;
    next = stack->next;
    while (next->sentinel != 1)
    {
        count++;
        next = next->next;
    }
    return (count);
}