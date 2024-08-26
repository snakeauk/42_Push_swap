#include "push_swap.h"

void    ft_stack_print(t_stack *stack)
{
    t_stack *next;

    next = stack->next;
    while (next->sentinel != 1)
    {
        ft_printf("%d\n", next->content);
        next = next->next;
    }
}
