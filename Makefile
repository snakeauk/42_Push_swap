NAME		=	push_swap
BONUS	=	checker

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

LIB			=	lib.a

LIB_DIR		=	./lib

INCLUDES	=	-I ./includes -I $(LIB_DIR)/includes

SRCS_DIR	=	./srcs
ARY_DIR		=	$(SRCS_DIR)/ft_array
CMD_DIR		=	$(SRCS_DIR)/ft_command
SORT_DIR	=	$(SRCS_DIR)/ft_sort
STACK_DIR	=	$(SRCS_DIR)/ft_stack

MAN_SRCS	=	$(SRCS_DIR)/main.c \
				$(SRCS_DIR)/push_swap.c

ARRAY_SRCS	=	$(ARY_DIR)/ft_argv_input_array.c \
				$(ARY_DIR)/ft_array_char_free.c \
				$(ARY_DIR)/ft_array_input.c \
				$(ARY_DIR)/ft_array_input_stack.c \
				$(ARY_DIR)/ft_array_size.c \
				$(ARY_DIR)/ft_array_sort.c

CMD_SRCS	=	$(CMD_DIR)/ft_command_execute.c \
				$(CMD_DIR)/ft_command_print.c \
				$(CMD_DIR)/ft_command_push.c \
				$(CMD_DIR)/ft_command_reverse.c \
				$(CMD_DIR)/ft_command_rotate.c \
				$(CMD_DIR)/ft_command_swap.c \
				$(CMD_DIR)/ft_iscommand.c

SORT_SRCS	=	$(SORT_DIR)/ft_sort.c \
				$(SORT_DIR)/ft_sort_large.c \
				$(SORT_DIR)/ft_sort_less_3.c \
				$(SORT_DIR)/ft_sort_less_6.c

STACK_SRCS	=	$(STACK_DIR)/ft_stack_argv_input.c \
				$(STACK_DIR)/ft_stack_add_back.c \
				$(STACK_DIR)/ft_stack_create.c \
				$(STACK_DIR)/ft_stack_isnear.c \
				$(STACK_DIR)/ft_stack_last.c \
				$(STACK_DIR)/ft_stack_min.c \
				$(STACK_DIR)/ft_stack_new.c \
				$(STACK_DIR)/ft_stack_print.c \
				$(STACK_DIR)/ft_stack_rotate.c \
				$(STACK_DIR)/ft_stack_swap.c \
				$(STACK_DIR)/ft_stack_add_front.c \
				$(STACK_DIR)/ft_stack_free.c \
				$(STACK_DIR)/ft_stack_issort.c \
				$(STACK_DIR)/ft_stack_max.c \
				$(STACK_DIR)/ft_stack_min_count.c \
				$(STACK_DIR)/ft_stack_pop.c \
				$(STACK_DIR)/ft_stack_reverse.c \
				$(STACK_DIR)/ft_stack_size.c

SRCS		=	$(MAN_SRCS) $(ARRAY_SRCS) $(CMD_SRCS) $(SORT_SRCS) $(STACK_SRCS)
OBJS		=	$(SRCS:.c=.o)

BONUS_DIR	=	$(SRCS_DIR)/bonus
BONUS_SRCS	=	$(BONUS_DIR)/push_swap_bonus.c $(ARRAY_SRCS) $(CMD_SRCS) $(SORT_SRCS) $(STACK_SRCS)
BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

RESET		=	\033[0m
BOLD		=	\033[1m
DIM			=	\033[2m
UNDERLINE	=	\033[4m
BLINK		=	\033[5m
INVERT		=	\033[7m
LIGHT_BLUE	=	\033[94m
YELLOW		=	\033[93m

MAKEFLAGS	+=	--no-print-directory

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@$(MAKE) -C $(LIB_DIR)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(LIB_DIR)/$(LIB) -o $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(NAME) Complete!$(RESET)"

clean:
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME)...$(RESET)"
	@$(MAKE) clean -C $(LIB_DIR)
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME) Complete!$(RESET)"

fclean:
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME)...$(RESET)"
	@$(MAKE) clean -C $(LIB_DIR)
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@$(MAKE) fclean -C $(LIB_DIR)
	@$(RM) $(NAME) $(BONUS)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME) Complete!$(RESET)"

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJS) $(OBJS)
	@$(MAKE) -C $(LIB_DIR)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(BONUS)...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(BONUS_OBJS) $(LIB_DIR)/$(LIB) -o $(BONUS)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(BONUS) Complete!$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus
