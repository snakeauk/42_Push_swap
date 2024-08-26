#include "push_swap.h"

t_stack *ft_stackpop(t_stack *stack)
{
    t_stack *node;
    t_stack *next_node;

    if (stack->next->sentinel == 1)
        return (NULL);
    node = stack->next;
    next_node = stack->next->next;
    stack->next = next_node;
    next_node->prev = stack;
    return (node);
}