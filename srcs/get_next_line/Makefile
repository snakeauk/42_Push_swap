NAME = libftgetnextline.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRCS_DIR = ./srcs/
INCLUDES_DIR = ../../includes/

SRCS =	$(SRCS_DIR)/get_next_line.c

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ../libft/
LIBFT_NAME = libft.a
FT_PRINTF_PATH = ../ft_printf/
FT_PRINTF_NAME = libftprintf.a

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDES_DIR)

$(NAME): $(OBJS)
	@cp $(FT_PRINTF_PATH)/$(FT_PRINTF_NAME) $(NAME)
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re