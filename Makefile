NAME		=	push_swap

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

LIB			=	lib.a

LIB_DIR		=	./lib

INCLUDES	=	-I ./includes -I $(LIB_DIR)/includes

UTILS_DIR	=	$(SRCS_DIR)/utils

SRCS_DIR	=	./srcs
SRCS		:=	./src/array/int_arr.c ./src/array/str_arr.c ./src/error/error.c ./src/op_list/op_list.c \
				./src/op_list/opt/opt.c ./src/solver/insertion_sort.c ./src/solver/quick_sort/quick_sort.c ./src/solver/sort.c \
				./src/solver/sort_2.c ./src/solver/sort_3.c ./src/solver/sort_4.c ./src/solver/sort_5.c ./src/solver/utils/is_sorted.c \
				./src/stack/constructor.c ./src/stack/controls/basic_controls/at.c ./src/stack/controls/basic_controls/pop.c \
				./src/stack/controls/basic_controls/push.c ./src/stack/controls/basic_controls/record.c ./src/stack/controls/basic_controls/rotate.c \
				./src/stack/controls/print_stack.c ./src/stack/controls/push.c ./src/stack/controls/repeat.c ./src/stack/controls/rev_rotate.c \
				./src/stack/controls/rotate.c ./src/stack/controls/swap.c ./src/stack/destructor.c ./src/stack/node/constructor.c ./src/stack/node/controls/has.c \
				./src/stack/node/controls/insert.c ./src/stack/node/controls/pop.c ./src/stack/node/destructor.c ./src/utils/compress_array.c \
				./src/utils/ft_atoi_arr.c ./src/utils/ft_atoi_ex.c ./src/utils/get_median_in_list.c ./src/utils/min_value_in_list.c ./src/utils/sort.c ./src/validation/validation.c
OBJS		:=	$(SRCS:.c=.o) ./src/main.o

BONUS_NAME	=	checker
B_SRCS		=	./src/checker/main.c
B_OBJS		=	$(B_SRCS:.c=.o) $(SRCS:.c=.o)

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
	@$(RM) $(OBJS) $(B_OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME) Complete!$(RESET)"

fclean: clean
	@$(MAKE) fclean -C $(LIB_DIR)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME)...$(RESET)"
	@$(RM) $(NAME) $(BONUS_NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)ALL Cleaning $(NAME) Complete!$(RESET)"

bonus: fclean $(B_OBJS) $(OBJS)
	@$(MAKE) -C $(LIB_DIR)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(BONUS)...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) $(B_OBJS) $(LIB_DIR)/$(LIB) -o $(BONUS_NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Compile $(BONUS) Complete!$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus