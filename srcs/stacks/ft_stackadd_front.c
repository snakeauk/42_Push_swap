#include "push_swap.h"

void    ft_stackadd_front(t_stack *stack, t_stack *new)
{
    t_stack *next;

    if (new)
    {
        if (stack->sentinel == 1)
        {
            next = stack->next;
            new->next = next;
            new->prev = stack;
            stack->next = new;
            next->prev = new;
        }
    }
}
// int main(int argc, char **argv)
// {
//     t_indata *data;
//     t_stack *stack;
//     t_stack *addstack;
//     int count;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     stack = input_stack(data);
//     addstack = ft_stacknew(100);
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
//     ft_stackadd_front(stack, addstack);
//     stack = stack->next;
//     count = 1;
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
//     ft_printf("stack->prev OK!!\n");
//     exit(0);
// }