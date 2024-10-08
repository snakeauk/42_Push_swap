
# ifndef FT_STACK_H
# define FT_STACK_H

# include <stdlib.h>
# include <stdbool.h>
# include "ft_printf.h"

typedef	struct	s_stack
{
	int				rank;
	int				content;
	struct s_stack	*next;
}				t_stack;

# include "ft_array.h"
# include "ft_command.h"

bool		ft_stack_isnear(t_stack **stack, int rank);
int			ft_stack_issort(t_stack **stack);
int			ft_stack_issort_rev(t_stack **stack);
t_stack		*ft_stack_new(int content);
int			ft_stack_size(t_stack **stack);
t_stack		*ft_stack_min(t_stack **stack);
t_stack		*ft_stack_max(t_stack **stack);
t_stack		*ft_stack_last(t_stack **stack);
void		ft_stack_add_front(t_stack **stack, t_stack *new);
void		ft_stack_add_back(t_stack **stack, t_stack *new);
t_stack		*ft_stack_pop_front(t_stack **stack);
t_stack		*ft_stack_pop_back(t_stack **stack);
void		ft_stack_free(t_stack **stack);
t_stack		*ft_stack_create(int **array);
void		ft_stack_print(t_stack **stack);
void		ft_stack_rotate(t_stack **stack);
void		ft_stack_reverse(t_stack **stack);
void	 	ft_stack_swap(t_stack **stack);
int			ft_stack_min_count(t_stack **stack, t_stack *min);

# endif