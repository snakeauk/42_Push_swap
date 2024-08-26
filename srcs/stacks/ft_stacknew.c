#include "push_swap.h"

t_stack *ft_stacknew(int content)
{
    t_stack *new;

    new = (t_stack *)malloc(sizeof(t_stack));
    if (!new)
        exit(ft_error());
    new->sentinel = 0;
    new->content = content;
    new->prev = NULL;
    new->next = NULL;
    return (new);
}