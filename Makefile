NAME = lib.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

LIBFT_PATH = ./srcs/libft/
LIBFT_NAME = libft.a
FT_PRINTF_PATH = ./srcs/ft_printf/
FT_PRINTF_NAME = libftprintf.a
GET_NEXT_LINE_PATH = ./srcs/get_next_line/
GET_NEXT_LINE_NAME = libftgetnextline.a


RESET = \033[0m
BOLD = \033[1m
DIM = \033[2m
UNDERLINE = \033[4m
BLINK = \033[5m
INVERT = \033[7m
LIGHT_BLUE = \033[94m
YELLOW = \033[93m

all: $(NAME)

.c.o:
	@echo "$(BOLD)$(YELLOW)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
$(NAME): $(OBJS)
	@echo "$(BOLD)$(LIGHT_BLUE)Linking libft objects...$(RESET)"
	@$(MAKE) -C $(LIBFT_PATH)
	@echo "$(BOLD)$(LIGHT_BLUE)Linking ft_printf objects...$(RESET)"
	@$(MAKE) -C $(FT_PRINTF_PATH)
	@echo "$(BOLD)$(LIGHT_BLUE)Linking get_next_line objects...$(RESET)"
	@$(MAKE) -C $(GET_NEXT_LINE_PATH)
	@cp $(GET_NEXT_LINE_PATH)/$(GET_NEXT_LINE_NAME) $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)$(NAME) created successfully!$(RESET)"

clean:
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning libft objects...$(RESET)"
	@$(MAKE) -C $(LIBFT_PATH) clean
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning ft_printf objects...$(RESET)"
	@$(MAKE) -C $(FT_PRINTF_PATH) clean
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning get_next_line objects...$(RESET)"
	@$(MAKE) -C $(GET_NEXT_LINE_PATH) clean
	@echo "$(BOLD)$(LIGHT_BLUE)Complete clean!$(RESET)"

fclean: clean
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(LIBFT_NAME)...$(RESET)"
	@$(RM) $(LIBFT_PATH)/$(LIBFT_NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(FT_PRINTF_NAME)...$(RESET)"
	@$(RM) $(FT_PRINTF_PATH)/$(FT_PRINTF_NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(GET_NEXT_LINE_NAME)...$(RESET)"
	@$(RM) $(GET_NEXT_LINE_PATH)/$(GET_NEXT_LINE_NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(NAME)...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Complete fclean!$(RESET)"

re: fclean all

.PHONY: all clean fclean re