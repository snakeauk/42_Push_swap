#include "push_swap.h"

void    check_dup(int *buf, int num, int size)
{
    int index;

    index = 0;
    while (index < size)
    {
        if (buf[index] == num)
            exit(ft_error());
        index++;
    }
}

t_psargs *input_ctl(int argc, char **argv)
{
    t_psargs  *data;
    int     index;
    int     num;

    data = (t_psargs *)malloc(sizeof(t_psargs));
    if (!data)
        exit(ft_error());
    data->size = argc - 1;
    data->buf = (int *)malloc(sizeof(int) * (data->size));
    if (!data->buf)
        exit(ft_error());
    index = 0;
    while (index < data->size)
    {
        num = ft_atoi(argv[index + 1]);
        check_dup(data->buf, num, index);
        data->buf[index] = num;
        index++;
    }
    return (data);
}
// int main(int argc, char **argv)
// {
//     t_indata *input_dt;
//     int index;
//     int i;

//     if (argc < 2)
//         exit(ft_error());
//     input_dt = input_ctl(argc, argv);
//     ft_printf("size:%d\n", input_dt->size);
//     index = 0;
//     while (index < input_dt->size)
//     {
//         ft_printf("%d: %d\n", index,input_dt->buf[index]);
//         index++;
//     }
//     ft_printf("OK\n");
//     free(input_dt->buf);
//     free(input_dt);
//     return(0);
// }