#include "push_swap_bonus.h"
int push_swap_bonus(t_stack **stack_a, t_stack **stack_b)
{
    int     ret;
    char    *line;

	if (ft_stack_issort(stack_a))
		return (EXIT_SUCCESS);
    while (1)
    {
        line = get_next_line(STDIN_FILENO);
        if (!line)
            break;
        if (ft_iscommand(line))
        {
            ret = ft_command_execute(line, stack_a, stack_b);
            if (ret < 0)
                break ;
            if (ft_stack_issort(stack_a) && ft_stack_size(stack_b) == 0)
            {
                free(line);
                return (EXIT_SUCCESS);
            }
        }
        else
            break;
        free(line);
    }
    free(line);
    return (EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
    int		status;
    int 	*array;
    t_stack	*stack_a;
    t_stack *stack_b;

    if (argc < 2)
        return (EXIT_FAILURE);
    array = ft_array_input(argc, argv);
    if (!array)
        return (EXIT_FAILURE);
    stack_a = ft_stack_create(&array);
    if (!stack_a)
    {
        free(array);
        return (EXIT_FAILURE);
    }
    stack_b = NULL;
    status = push_swap_bonus(&stack_a, &stack_b);
	if (status == EXIT_SUCCESS)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
    if (ft_stack_size(&stack_a) != 0)
        ft_stack_free(&stack_a);
    if (ft_stack_size(&stack_b) != 0)
        ft_stack_free(&stack_b);
    free(array);
    return (status);
}
