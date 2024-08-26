#include "push_swap.h"

t_stack *ft_stackcompress(t_stack *stack)
{
    t_stack *new;
    t_stack *next;
    int     rank;

    new = ft_stackinit();
    next = stack->next;
    while (next->sentinel != 1)
    {
        rank = ft_starkrank(stack, next->content);
        ft_stackadd_back(new, ft_stacknew(rank));
        next = next->next;
    }
    return (new);
}
// int main(int argc, char **argv)
// {
//     t_psargs *data;
//     t_stack *stack;
//     t_stack *new;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     stack = ft_stackinput(data);
//     ft_stack_print(stack);
//     ft_printf("stack->next OK!!\n\n");
//     ft_stack_revprint(stack);
//     ft_printf("stack->prev OK!!\n\n");
//     ft_printf("====================\n\n\n");
// // after
//     new = ft_stackcompress(stack);
//     ft_stack_print(new);
//     ft_printf("new->next OK!!\n\n");
//     ft_stack_revprint(new);
//     ft_printf("new->prev OK!!\n");
//     exit(0);
// }