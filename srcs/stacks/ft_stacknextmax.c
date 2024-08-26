#include "push_swap.h"

int ft_stacknextmax(t_stack *stack, int max)
{
    int     next_max;
    t_stack *next;

    next = stack->next;
    next_max = ft_stackmin(stack);
    while (next->sentinel != 1)
    {
        if (next->content < max && next->content > next_max)
            next_max = next->content;
        next = next->next;
    }
    return (next_max);
}
// int main(int argc, char **argv)
// {
//     t_indata *data;
//     t_stack *stack;
//     int count;
//     int max;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     stack = input_stack(data);
//     count = 1;
//     stack = stack->next;
//     while (stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, stack->content);
//         stack = stack->next;
//         count++;
//     }
//     count--;
//     ft_printf("stack->next OK!!\n\n\n");
//     stack = stack->prev;
//     while (stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, stack->content);
//         stack = stack->prev;
//         count--;
//     }
//     ft_printf("stack->prev OK!!\n\n\n");
//     ft_printf("====================\n\n\n");
//     max = ft_stackmax(stack);
//     ft_printf("max: %d\n", max);
//     ft_printf("next_max: %d\n", ft_stacknextmax(stack,max));
//     exit(0);
// }