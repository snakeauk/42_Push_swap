#include "push_swap.h"

int ft_stacknextmin(t_stack *stack, int min)
{
    int next_min;
    t_stack *next;

    next = stack->next;
    next_min = ft_stackmax(stack);
    while (next->sentinel != 1)
    {
        if (next->content < next_min && next->content > min)
            next_min = next->content;
        next = next->next;
    }
    return (next_min);
}
// int main(int argc, char **argv)
// {
//     t_indata *data;
//     t_stack *stack;
//     int count;
//     int min;
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
//     min = ft_stackmin(stack);
//     ft_printf("min: %d\n", min);
//     ft_printf("next_min: %d\n", ft_stacknextmin(stack,min));
//     exit(0);
// }