#include "push_swap.h"

void    command_ra(t_psargs *data)
{
    if (data->stack_a->next->sentinel == 1)
        return ;
    ft_stackrotate(data->stack_a);
    ft_stackadd_back(data->ans, ft_stacknew(COM_RA));
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
//     count = 0;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->prev;
//         count++;
//     }
//     ft_printf("data->stack_a->prev OK!!\n\n\n");
//     ft_printf("====================\n\n\n");
//     command_ra(data);
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
//     count = 0;
//     while (data->stack_a->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->stack_a->content);
//         data->stack_a = data->stack_a->prev;
//         count++;
//     }
//     ft_printf("data->stack_a->prev OK!!\n");
//     exit(0);
// }