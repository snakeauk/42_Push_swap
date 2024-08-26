#include "push_swap.h"

void    quicksort_push(t_psargs *data, int content, int stack_num, int sep)
{
    int select;

    select = 0;
    if (content < sep)
        select = 1;
    if (stack_num == STACK_A)
    {
        command_pb(data);
        if (select == 1)
            command_rb(data);
    }
    else if (stack_num == STACK_B)
    {
        command_pa(data);
        if (select == 0)
            command_ra(data);
    }
    else
        ft_error();
}

void    quicksort_back(t_psargs *data, int min, int max, int stack_num)
{
    int select;

    select = 0;
    if (select_stack(data, stack_num)->next->content > (min+max/2))
        select = 1;
    if (stack_num == STACK_A)
    {
        command_pb(data);
        if (select == 1)
            command_rb(data);
    }
    else if (stack_num == STACK_B)
    {
        command_pa(data);
        if (select == 0)
            command_ra(data);
    }
    else
        ft_error();
}

t_stack *select_stack(t_psargs *data, int stack_num)
{
    if (stack_num == STACK_A)
        return (data->stack_a);
    else
        return (data->stack_b);
}

void    quicksort_partition(t_psargs *data, int min, int max, int stack_num)
{
    int     count;
    t_stack *stack;

    if (max == min+1)
        return ;
    stack = select_stack(data, stack_num);
    count = min;
    while (count < max)
    {
        quicksort_push(data, stack->next->content, stack_num, (min + max) / 2);
        count++;
    }
    // quicksort_partition(data, min, max+min/2, (stack_num == 0));
    // quicksort_partition(data, max+min/2, max, (stack_num == 0));
    while (min < count)
    {
        if (count > ((max+min)/2))
            quicksort_back(data, ((min+max)/2), max, STACK_B);
        else
            quicksort_back(data, min, (min+max)/2, STACK_B);
        count--;
    }
}

void    sort_over6(t_psargs *data, int size)
{
    int min;
    int max;
    int stack_num;

    min = 0;
    max = size;
    stack_num = 0;
    while (!ft_issorted(data->stack_a))
    {
        quicksort_partition(data, min, max, stack_num);
        if (max == ft_stackmax(select_stack(data, stack_num)))
            stack_num = (stack_num==0);
    }
    // sep = size/2;
    // partition_size(data, size, sep);
    // med = size / 2;
    // quicksort_partition(data, med, med, sep, size);
    // quicksort_over6(data, sep);
}

// void    quicksort_over6(t_psargs *data, int sep)
// {
//     int sep_size;

//     sep_size = data->partition->next->content;
//     while (sep_size > 0)
//     {
//         command_pa(data);
//         sep_size--;
//     }
//     if (ft_issorted(data->stack_a))
//         ;
//     if (data->partition->next->content < 7)
//     {
//         if (data->partition->next->content <= 3)
//         {
//             if (data->partition->next->content == 2)
//                 command_sa(data);
//             else
//                 sort_3(data);
//         }
//         else
//             sort_less7(data);
//         ft_stackpop(data->partition);
//     }
//     else
//         sort_over6(data, sep);
// }
// void    quicksort_back(t_psargs *data)
// {
//     if (data->stack_a->next->content > data->stack_b->next->content)
//         command_pa(data);
//     else
//     {
//         command_ra(data);
//         quicksort_back(data);
//         command_rra(data);
//     }
// }

// void    quicksort_partition(t_psargs *data, int min, int max, int sep, int size)
// {
//     int content;

//     while ((min != 0 && max != ft_stackmax(data->stack_a)) || size > 0)
//     {
//         size -= (sep * 2);
//         min -= sep;
//         max += sep;
//         if (min < 0)
//             min = 0;
//         if (max > ft_stackmax(data->stack_a))
//             max = ft_stackmax(data->stack_a);
//         while (ft_stackrange(data->stack_a, min, max))
//         {
//             content = data->stack_a->next->content;
//             if (content >= min && content <= min + sep)
//             {
//                 command_pb(data);
//                 command_rb(data);
//             }
//             else if (content <= max && content >= max - sep)
//             {
//                 command_pb(data);
//             }
//             else
//                 command_ra(data);
//         }
//     }
// }

// void    partition_size(t_psargs *data, int size, int sep)
// {
//     int mod;
//     int count;

//     data->partition = ft_stackinit();
//     count = 0;
//     mod = size % sep;
//     if (mod != 0)
//     {
//         ft_stackadd_front(data->partition, ft_stacknew(mod));
//         count += 2;
//     }
//     while (count < sep)
//     {
//         ft_stackadd_front(data->partition, ft_stacknew(size/sep));
//         count++;
//     }
//     if (mod != 0)
//         ft_stackadd_front(data->partition, ft_stacknew(mod));
// }

// void sort_over6(t_psargs *data, int size)
// {
//     int med;
//     int sep;

//     sep = 56;
//     partition_size(data, size, sep);
//     med = size / 2;
//     quicksort_partition(data, med, med, sep, size);
//     quicksort_over6(data, sep);
// }
// // int main(int argc, char **argv)
// // {
// //     t_indata *data;
// //     t_stack *a_stack;
// //     t_stack *b_stack;
// //     int count;
// //     check_input(argc, argv);
// //     data = input_ctl(argc, argv);
// //     ft_printf("data OK!!\n\n\n");
// //     a_stack = input_stack(data);
// //     b_stack = ft_stackinit();
// //     count = 1;
// //     a_stack = a_stack->next;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->next;
// //         count++;
// //     }
// //     count--;
// //     ft_printf("a_stack->next OK!!\n\n\n");
// //     a_stack = a_stack->prev;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->prev;
// //         count--;
// //     }
// //     ft_printf("a_stack->prev OK!!\n\n\n");
// //     ft_printf("====================\n\n\n");
// //     sort_over6(a_stack,b_stack,data, ft_stackmin(a_stack), ft_stackmedian(a_stack));
// //     a_stack = a_stack->next;
// //     count = 1;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->next;
// //         count++;
// //     }
// //     count--;
// //     ft_printf("a_stack->next OK!!\n\n\n");
// //     a_stack = a_stack->prev;
// //     while (a_stack->sentinel != 1)
// //     {
// //         ft_printf("%d:%d\n", count, a_stack->content);
// //         a_stack = a_stack->prev;
// //         count--;
// //     }
// //     ft_printf("a_stack->prev OK!!\n");
// //     exit(0);
// // }