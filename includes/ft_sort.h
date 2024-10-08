
# ifndef FT_SORT_H
# define FT_SORT_H

# include <stdlib.h>
# include "ft_stack.h"
# include "ft_command.h"
# include "ft_array.h"

typedef struct s_data {
	int	size;
	int	blksize;
	int	blk;
	int	blk_group;
}		t_data;

int 	ft_sort(t_stack **stack);
void	sort_2(t_stack **stack_a);
void	sort_3(t_stack **stack_a);
void	sort_mini(t_stack **stack_a, t_stack **stack_b);
void	sort_large(t_stack **stack_a, t_stack **stack_b);

# endif