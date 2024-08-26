#include "push_swap.h"

void ft_stackswap(t_stack *stack)
{
    t_stack *node1;
    t_stack *node2;
    t_stack *next_node;

    if (stack->next->sentinel == 1)
        return ;
    node1 = stack->next;
    node2 = stack->next->next;
    next_node = stack->next->next->next;
    node2->next = node1;
    node1->next = next_node;
    stack->next = node2;
    node2->prev = stack;
    node1->prev = node2;
    next_node->prev = node1;
}
// int main(int argc, char **argv)
// {
//     t_psargs *data;
//     int count;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     data->stack_a = ft_stackinput(data);
//     count = 0;
//     data->stack_a = data->stack_a->next;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->next;
//         count++;
//     }
//     ft_printf("data->stack_a->next OK!!\n\n\n");
//     data->stack_a = data->stack_a->prev;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->prev;
//         count--;
//     }
//     ft_printf("data->stack_a->prev OK!!\n\n\n");
//     ft_printf("====================\n\n\n");
//     ft_stackswap(data->stack_a);
//     data->stack_a = data->stack_a->next;
//     count = 0;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->next;
//         count++;
//     }
//     ft_printf("data->stack_a->next OK!!\n\n\n");
//     data->stack_a = data->stack_a->prev;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->prev;
//         count--;
//     }
//     ft_printf("data->stack_a->prev OK!!\n");
//     exit(0);
// }