#include "ft_command.h"

int	ft_iscommand_swap(char *cmd)
{
	if (ft_strncmp(cmd, "sa\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	else if (ft_strncmp(cmd, "sb\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	else if (ft_strncmp(cmd, "ss\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	return (0);
}

int	ft_iscommand_push(char *cmd)
{
	if (ft_strncmp(cmd, "pa\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	else if (ft_strncmp(cmd, "pb\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	return (0);
}

int	ft_iscommand_rotate(char *cmd)
{
	if (ft_strncmp(cmd, "ra\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	else if (ft_strncmp(cmd, "rb\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	else if (ft_strncmp(cmd, "rr\n", 3) == 0 && ft_strlen(cmd) == 3)
		return (1);
	return (0);
}

int	ft_iscommand_reverse(char *cmd)
{
	if (ft_strncmp(cmd, "rra\n", 4) == 0 && ft_strlen(cmd) == 4)
		return (1);
	else if (ft_strncmp(cmd, "rrb\n", 4) == 0 && ft_strlen(cmd) == 4)
		return (1);
	else if (ft_strncmp(cmd, "rrr\n", 4) == 0 && ft_strlen(cmd) == 4)
		return (1);
	return (0);
}

int	ft_iscommand(char *cmd)
{
	if (ft_iscommand_swap(cmd))
		return (1);
	else if (ft_iscommand_push(cmd))
		return (1);
	else if (ft_iscommand_rotate(cmd))
		return (1);
	else if (ft_iscommand_reverse(cmd))
		return (1);
	return (0);
}
