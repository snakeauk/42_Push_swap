#include "push_swap.h"

int ft_issorted(t_stack *stack)
{
    t_stack *check;

    check = stack;
    check = check->next;
    while (check->next->sentinel != 1)
    {
        if (check->content > check->next->content && check->next->sentinel != 1)
            return (0);
        check = check->next;
    }
    return (1);
}
