#include "push_swap.h"

int ft_starkrank(t_stack *stack, int content)
{
    int count;
    int min;

    if (stack->next->sentinel == 1)
        return (0);
    count = 1;
    min = ft_stackmin(stack);
    while(min != content)
    {
        min = ft_stacknextmin(stack, min);
        count++;
    }
    return (count);
}
