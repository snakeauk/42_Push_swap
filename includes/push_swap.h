#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack {
    int     content;
    int     sentinel;
    struct  s_stack  *next;
    struct  s_stack  *prev;
}   t_stack;

typedef struct s_psargs {
	int		*buf;
    int     size;
    t_stack *stack_a;
    t_stack *stack_b;
	t_stack	*ans;
	t_stack	*partition;
}			t_psargs;

#ifndef STDERR
# define STDERR 1
#endif

#ifndef STACK_A
# define STACK_A 0
# define STACK_B 1
#endif

#ifndef COM
# define COM 0
# define COM_SA 1
# define COM_SB 2
# define COM_SS 3
# define COM_PA 4
# define COM_PB 5
# define COM_RA 6
# define COM_RB 7
# define COM_RR 8
# define COM_RRA 9
# define COM_RRB 10
# define COM_RRR 11
#endif

int     main(int argc, char **argv);
int     ft_error(void);
int     push_swap(int argc, char **argv);
void    check_input(int argc, char **argv);
int     check_int(char *str);
int     ft_issign(int c);
void    check_dup(int *buf, int num, int size);
t_psargs  *input_ctl(int argc, char **argv);
t_stack *ft_stackinput(t_psargs *data);
int     ft_issorted(t_stack *stack);
void    ft_sort(t_psargs *data, int size);

void    sort_3(t_psargs *data);
void    sort_3_switch_sf(t_psargs *data, int first, int second, int third);
void    sort_3_switch_fs(t_psargs *data, int first, int third);
void    sort_less7(t_psargs *data);

void    sort_over6(t_psargs *data, int size);
// void    quicksort_partition(t_psargs *data, int min, int max, int sep, int size);
void    quicksort_over6(t_psargs *data, int sep);
void    partition_size(t_psargs *data, int size, int sep);
// void    quicksort_back(t_psargs *data);

void    quicksort_push(t_psargs *data, int content, int stack_num, int sep);
void    quicksort_back(t_psargs *data, int stack_num);
t_stack *select_stack(t_psargs *data, int stack_num);
void    quicksort_partition(t_psargs *data, int min, int max, int stack_num);
void    sort_over6(t_psargs *data, int size);

t_stack *ft_stackinit(void);
t_stack *ft_stacknew(int content);
int     ft_stackmin(t_stack *stack);
int     ft_stackmax(t_stack *stack);
int     ft_stackmedian(t_stack *stack);
int     ft_stacksize(t_stack *stack);
t_stack *ft_stackcompress(t_stack *stack);
int     ft_starkrank(t_stack *stack, int content);
int     ft_stackrange(t_stack *stack, int min, int max);
void    ft_stack_print(t_stack *stack);
void    ft_stack_revprint(t_stack *stack);
void	ft_stackfree(t_stack **stack);

void    ft_stackpush(t_stack *stack1, t_stack *stack2);
t_stack *ft_stackpop(t_stack *stack);
void    ft_stackswap(t_stack *stack);
void    ft_stackrotate(t_stack *stack);
void    ft_stackrotate(t_stack *stack);
void    ft_stackreverse(t_stack *stack);

int     ft_stacknextmin(t_stack *stack, int min);
int     ft_stacknextmax(t_stack *stack, int max);
void    ft_stackadd_front(t_stack *stack, t_stack *new);
void    ft_stackadd_back(t_stack *stack, t_stack *new);

void    command_sa(t_psargs *data);
void    command_sb(t_psargs *data);
void    command_ra(t_psargs *data);
void    command_rb(t_psargs *data);
void    command_pa(t_psargs *data);
void    command_pb(t_psargs *data);
void    command_rra(t_psargs *data);
void    command_rrb(t_psargs *data);


void    change_ans(t_stack *ans);
int     ft_isoptimization(t_stack *ans);
void    display_ans(int choice);
void    push_swap_ans(t_stack *ans);

#endif