#include "push_swap.h"

int ft_issign(int c)
{
    return (c == '-' || c == '+');
}

int check_int(char *str)
{
    long long   ln;
    long long   sign;
    long long   limit;
    size_t      index;

    ln = 0;
    index = 0;
    sign = 1;
    while (ft_issign(str[index]))
    {
        if (str[index++] == '-')
            sign *= -1;
    }
    limit = INT_MIN + (sign + 1) / 2;
    while (ft_isdigit(str[index]))
    {
        if (sign * -1 * ln < (limit + str[index] - '0') / 10)
            return (0);
        ln = ln * 10 + sign * (str[index] - '0');
        index++;
    }
    return (str[index] == '\0');
}

void    check_input(int argc, char **argv)
{
    int index;

    index = 1;
    while (index < argc)
    {
        if (!argv[index][0])
            exit(ft_error());
        if (!check_int(argv[index]))
            exit(ft_error());
        index++;
    }
}
// int main(int argc, char **argv)
// {
//     check_input(argc, argv);
//     ft_printf("OK\n");
//     return (0);
// }