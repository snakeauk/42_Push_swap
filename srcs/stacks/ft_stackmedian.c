#include "push_swap.h"

int ft_stackmedian(t_stack *stack)
{
    int min;
    int max;
    int ret;

    min = ft_stackmin(stack);
    max = ft_stackmax(stack);
    while (min < max)
    {
        min = ft_stacknextmin(stack, min);
        max = ft_stacknextmax(stack, max);
    }
    ret = min;
    return (ret);
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
//     ft_printf("dep_num: %d\n",ft_stackmedian(stack));
//     exit(0);
// }