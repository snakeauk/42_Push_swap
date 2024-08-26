#include "push_swap.h"

t_stack *ft_stackinput(t_psargs *data)
{
    t_stack *stack;
    int     index;

    stack = ft_stackinit();
    index = 0;
    while (index < data->size)
    {
        ft_stackadd_back(stack, ft_stacknew(data->buf[index]));
        index++;
    }
    return (ft_stackcompress(stack));
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
//     ft_printf("stack->prev OK!!\n");
//     exit(0);
// }