#include "push_swap.h"

// int main(int argc, char **argv)
// {
//     t_indata *data;
//     t_stack *a_stack;
//     t_stack *b_stack;
//     int count;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     b_stack = input_stack(data);
//     count = 0;
//     a_stack = b_stack->next;
//     b_stack = ft_stackinit();
//     count = 0;
//     a_stack = a_stack->next;
//     ft_printf("a_stack->next\n");
//     while (a_stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, a_stack->content);
//         a_stack = a_stack->next;
//         count++;
//     }
//     ft_printf("b_stack->next\n");
//     while (b_stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, b_stack->content);
//         b_stack = b_stack->next;
//         count++;
//     }
//     ft_printf("b_stack->next OK!!\n\n\n");
//     a_stack = a_stack->prev;
//     count = 0;
//     ft_printf("a_stack->prev\n");
//     while (a_stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, a_stack->content);
//         a_stack = a_stack->prev;
//         count++;
//     }
//     b_stack = b_stack->prev;
//     count = 0;
//     ft_printf("b_stack->prev\n");
//     while (b_stack->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, b_stack->content);
//         b_stack = b_stack->prev;
//         count++;
//     }
//     ft_printf("b_stack->prev OK!!\n\n\n");
//     ft_printf("====================\n\n\n");
//     ft_quicksort(a_stack, b_stack, data, ft_stacksize(a_stack));
//     exit(0);
// }