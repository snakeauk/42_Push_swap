#include "push_swap.h"

void sort_3_switch_fs(t_psargs *data, int first, int third)
{
    if (first < third)
    {
        command_sa(data);
        command_ra(data);
    }
    else
        command_rra(data);
}

void sort_3_switch_sf(t_psargs *data, int first, int second, int third)
{
    if (first < third)
    {
        command_sa(data);
    }
    else
    {
        if (second < third)
        {
            command_ra(data);
        }
        else
        {
            command_sa(data);
            command_rra(data);
        }
    }
}

void sort_3(t_psargs *data)
{
    int first;
    int second;
    int third;

    first = data->stack_a->next->content;
    second = data->stack_a->next->next->content;
    third = data->stack_a->next->next->next->content;

    if (ft_issorted(data->stack_a))
        return ;
    if (first < second)
        sort_3_switch_fs(data, first, third);
    else
        sort_3_switch_sf(data, first, second, third);
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
//     sort_3(data);
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