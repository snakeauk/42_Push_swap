#include "ft_stack.h"

static int	ft_input_check(t_stack **stack, long num)
{
	t_stack	*node;

	node = (*stack);
	while (node)
	{
		if (node->content == num)
		{
			ft_stack_free(stack);
			return (0);
		}
		node = node->next;
	}
	return (1);
}

static	t_stack	*ft_stack_input(int start, int end, char **str_array)
{
	long	num;
	t_stack	*stack;

	stack = NULL;
	while (start < end)
	{
		if (!ft_isint(str_array[start]))
		{
			if (stack)
				ft_stack_free(&stack);
			return (NULL);
		}
		num = ft_atol(str_array[start]);
		if (!ft_input_check(&stack, num))
		{
			ft_stack_free(&stack);
			return (NULL);
		}
		ft_stack_add_back(&stack, ft_stack_new(num));
		start++;
	}
	return (stack);
}

t_stack	*ft_stack_argv_input(int argc, char **argv)
{
	char	**split;
	t_stack	*stack;

	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (!split)
		{
			ft_dprintf(STDERR_FILENO, "Error\n");
			return (NULL);
		}
		stack = ft_stack_input(0, ft_array_char_size(split), split);
		ft_array_char_free(split);
	}
	else
		stack = ft_stack_input(1, argc, argv);
	if (!stack)
	{
		ft_dprintf(STDERR_FILENO, "Error\n");
		return (NULL);
	}
	return (stack);
}
