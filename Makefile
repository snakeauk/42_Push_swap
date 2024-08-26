NAME		=	push_swap
BONUS		=	checker

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

LIB			=	lib.a

LIB_DIR		=	./lib

SRCS_DIR	=	./srcs
STACK_DIR	=	$(SRCS_DIR)/stack
UTILS_DIR	=	$(SRCS_DIR)/utils

SRCS		=	$(SRCS_DIR)/main.c \
				$(SRCS_DIR)/input_to_stack.c \
				\
				$(STACK_DIR)/ft_issorted.c \
				$(STACK_DIR)/ft_stackadd_back.c \
				$(STACK_DIR)/ft_stackfree.c \
				$(STACK_DIR)/ft_stackinput.c \
				$(STACK_DIR)/ft_stacknew.c \
				\
				$(UTILS_DIR)/ft_error.c \
				$(UTILS_DIR)/ft_issign.c \


OBJS		=	$(SRCS:.c=.o)


BONUS_DIR	=	./bonus
BONUS_SRCS	=	$(BONUS_DIR)/main.c
BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

INCLUDES	=	-I ./includes -I $(LIB_DIR)/includes

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

$(NAME): $(OBJS) $(LIB_OBJS) $(SRCS_DIR)/main.o
	@$(MAKE) -C $(LIB_DIR)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(LIB_DIR)/$(LIB) -o $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(NAME) Complete!$(RESET)"

$(BONUS):
# $(BONUS): $(BONUS_OBJS) $(OBJS) $(LIB_OBJS)
#	@$(MAKE) -C $(LIB_DIR)
#	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(BONUS)...$(RESET)"
#	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(OBJS) $(LIB_OBJS) -o $(BONUS)
#	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(BONUS) Complete!$(RESET)"

bonus: $(BONUS)

clean:
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME)...$(RESET)"
	@$(MAKE) clean -C $(LIB_DIR)
	@$(RM) $(OBJS) $(BONUS_OBJS) $(LIB_OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME) Complete!$(RESET)"

fclean: clean
	@$(MAKE) fclean -C $(LIB_DIR)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME)...$(RESET)"
	@$(RM) $(NAME) $(BONUS)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME) Complete!$(RESET)"

re: fclean all bonus

.PHONY: all clean fclean re