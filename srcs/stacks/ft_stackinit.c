#include "push_swap.h"

t_stack *ft_stackinit(void)
{
    t_stack *stack;

    stack = ft_stacknew(0);
    stack->sentinel = 1;
    stack->next = stack;
    stack->prev = stack;
    return (stack);
}