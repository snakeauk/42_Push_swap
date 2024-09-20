#include "push_swap.h"

//__attribute__((destructor))
//static void destructor() {
//    system("leaks -q push_swap");
//}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc <= 1)
		return (0);
	stack = new_stack_from(argv + 1, argc - 1);
	if (stack == NULL)
		exit_on_error();
	sort(stack);
	print_ops(&stack->op_list);
	destroy_stack(stack);
	return (0);
}
