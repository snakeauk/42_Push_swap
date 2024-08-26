#include "push_swap.h"

int push_swap(int argc, char **argv)
{
    t_psargs  *data;

    check_input(argc, argv);
    data = input_ctl(argc, argv);
    data->stack_a = ft_stackinput(data);
    data->stack_b = ft_stackinit();
    data->ans = ft_stackinit();
    ft_sort(data, ft_stacksize(data->stack_a));
    push_swap_ans(data->ans);
    exit (0);
}
