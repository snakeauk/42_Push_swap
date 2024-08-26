#include "push_swap.h"

void sort_less7(t_psargs *data)
{
    int size;
    int min;

    size = ft_stacksize(data->stack_a);
    if (size > 3)
    {
        min = ft_stackmin(data->stack_a);
        while (data->stack_a->next->content != min)
            command_ra(data);
        command_pb(data);
        sort_less7(data);
        command_pa(data);
    }
    if (size == 3)
        sort_3(data);
    if (size == 2 && data->stack_a->next->content > data->stack_a->next->next->content)
        command_sa(data);
}
// int main(int argc, char **argv)
// {
//     t_psargs *data;
//     int count;
//     check_input(argc, argv);
//     data = input_ctl(argc, argv);
//     ft_printf("data OK!!\n\n\n");
//     data->stack_a = ft_stackinput(data);
//     data->stack_b = ft_stackinit();
//     data->ans = ft_stackinit();
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
//     sort_less7(data);
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
//     data->ans = data->ans->next;
//     count = 0;
//     while (data->ans->sentinel != 1)
//     {
//         ft_printf("%d:%d\n", count, data->ans->content);
//         data->ans = data->ans->next;
//         count++;
//     }
//     ft_printf("data->ans->next OK!!\n\n\n");
//     exit(0);
// }