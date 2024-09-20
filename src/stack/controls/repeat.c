#include "push_swap.h"

void	repeat(void (*op)(t_stack *), t_stack *stack, int times)
{
	int	i;

	i = 0;
	while (i++ < times)
		op(stack);
}
