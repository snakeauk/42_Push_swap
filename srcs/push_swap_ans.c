#include "push_swap.h"

void    change_ans(t_stack *ans)
{
    if (ans->content == COM_SA || ans->content == COM_SB)
        ans->content = COM_SS;
    if (ans->content == COM_RA || ans->content == COM_RB)
        ans->content = COM_RR;
    if (ans->content == COM_RRA || ans->content == COM_RRB)
        ans->content = COM_RRR;
}

int ft_isoptimization(t_stack *ans)
{
    if (ans->content == COM_SA)
        return (ans->next->content == COM_SB);
    else if (ans->content == COM_SB)
        return (ans->next->content == COM_SA);
    else if (ans->content == COM_RA)
        return (ans->next->content == COM_RB);
    else if (ans->content == COM_RB)
        return (ans->next->content == COM_RA);
    else if (ans->content == COM_RRA)
        return (ans->next->content == COM_RRB);
    else if (ans->content == COM_RRB)
        return (ans->next->content == COM_RRA);
    else
        return (0);
}

void    display_ans(int choice)
{
    if (choice == COM_SA)
        ft_printf("sa\n");
    else if (choice == COM_SB)
        ft_printf("sb\n");
    else if (choice == COM_SS)
        ft_printf("ss\n");
    else if (choice == COM_PA)
        ft_printf("pa\n");
    else if (choice == COM_PB)
        ft_printf("pb\n");
    else if (choice == COM_RA)
        ft_printf("ra\n");
    else if (choice == COM_RB)
        ft_printf("rb\n");
    else if (choice == COM_RR)
        ft_printf("rr\n");
    else if (choice == COM_RRA)
        ft_printf("rra\n");
    else if (choice == COM_RRB)
        ft_printf("rrb\n");
    else if (choice == COM_RRR)
        ft_printf("rrr\n");
}

void    push_swap_ans(t_stack *ans)
{
    if (ans->next->sentinel == 1)
        exit(ft_error());
    ans = ans->next;
    while (ans->sentinel != 1)
    {
        if (ans->next->sentinel != 1)
        {
            if (ft_isoptimization(ans))
            {
                ans = ans->next;
                change_ans(ans);
            }
        }
        display_ans(ans->content);
        ans = ans->next;
    }
}