#include "push_swap.h"

void ft_stackreverse(t_stack *stack)
{
    t_stack *node;
    t_stack *last;

    if (stack->next->sentinel == 1)
        return;
    node = stack->prev;
    last = stack->prev->prev;
    last->next = stack;
    stack->prev = last;
    ft_stackadd_front(stack, node);
}
// int main(int argc, char **argv)
// {
//     t_indata *data;
//     t_stack *stack;
//     int count;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     stack = input_stack(data);
//     count = 0;
//     stack = stack->next;
//     while (stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, stack->content);
//         stack = stack->next;
//         count++;
//     }
//     ft_printf("stack->next OK!!\n\n\n");
//     stack = stack->prev;
//     count = 0;
//     while (stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, stack->content);
//         stack = stack->prev;
//         count++;
//     }
//     ft_printf("stack->prev OK!!\n\n\n");
//     ft_printf("====================\n\n\n");
//     ra(stack);
//     stack = stack->next;
//     count = 0;
//     while (stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, stack->content);
//         stack = stack->next;
//         count++;
//     }
//     ft_printf("stack->next OK!!\n\n\n");
//     stack = stack->prev;
//     count = 0;
//     while (stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, stack->content);
//         stack = stack->prev;
//         count++;
//     }
//     ft_printf("stack->prev OK!!\n");
//     exit(0);
// }