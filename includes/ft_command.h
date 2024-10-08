
# ifndef FT_COMMAND_H
# define FT_COMMAND_H

# include "ft_printf.h"
# include "ft_stack.h"

# define SA 1
# define SB 2
# define SS 3
# define PA 4
# define PB 5
# define RA 6
# define RB 7
# define RR 8
# define RRA 9
# define RRB 10
# define RRR 11

int		ft_command_sa(t_stack **stack_a);
int		ft_command_sb(t_stack **stack_b);
int		ft_command_ra(t_stack **stack_a);
int		ft_command_rb(t_stack **stack_b);
int		ft_command_rra(t_stack **stack_a);
int		ft_command_rrb(t_stack **stack_b);
int		ft_command_pa(t_stack **stack_a, t_stack **stack_b);
int		ft_command_pb(t_stack **stack_a, t_stack **stack_b);
int		ft_command_output(int cmd);
int		ft_command_choice(int cmd, int *store);
void	ft_command_print(int cmd);
int	    ft_iscommand_swap(char *cmd);
int	    ft_iscommand_push(char *cmd);
int	    ft_iscommand_rotate(char *cmd);
int	    ft_iscommand_reverse(char *cmd);
int	    ft_iscommand(char *cmd);
int	       ft_command_execute(char *cmd, t_stack **stack_a, t_stack **stack_b);

# endif