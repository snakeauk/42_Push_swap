NAME = lib.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

LIBFT_PATH = ./srcs/libft
LIBFT_SRCS = ./srcs/libft/srcs
LIBFT_NAME = libft.a
FT_PRINTF_PATH = ./srcs/ft_printf
FT_PRINTF_SRCS = ./srcs/ft_printf/srcs
FT_PRINTF_NAME = libftprintf.a
GET_NEXT_LINE_PATH = ./srcs/get_next_line
GET_NEXT_LINE_SRCS = ./srcs/get_next_line/srcs
GET_NEXT_LINE_NAME = libftgetnextline.a

SRCS =	$(LIBFT_SRCS)/ft_isalpha.c $(LIBFT_SRCS)/ft_isdigit.c $(LIBFT_SRCS)/ft_isalnum.c $(LIBFT_SRCS)/ft_isascii.c \
    	$(LIBFT_SRCS)/ft_isprint.c $(LIBFT_SRCS)/ft_strlen.c $(LIBFT_SRCS)/ft_memset.c $(LIBFT_SRCS)/ft_bzero.c \
    	$(LIBFT_SRCS)/ft_memcpy.c $(LIBFT_SRCS)/ft_memmove.c $(LIBFT_SRCS)/ft_strlcpy.c $(LIBFT_SRCS)/ft_strlcat.c \
    	$(LIBFT_SRCS)/ft_calloc.c $(LIBFT_SRCS)/ft_strdup.c $(LIBFT_SRCS)/ft_toupper.c $(LIBFT_SRCS)/ft_tolower.c \
    	$(LIBFT_SRCS)/ft_strchr.c $(LIBFT_SRCS)/ft_strncmp.c $(LIBFT_SRCS)/ft_memchr.c $(LIBFT_SRCS)/ft_memcmp.c \
    	$(LIBFT_SRCS)/ft_strnstr.c $(LIBFT_SRCS)/ft_atoi.c $(LIBFT_SRCS)/ft_strrchr.c $(LIBFT_SRCS)/ft_substr.c \
    	$(LIBFT_SRCS)/ft_strjoin.c $(LIBFT_SRCS)/ft_strtrim.c $(LIBFT_SRCS)/ft_split.c $(LIBFT_SRCS)/ft_itoa.c \
    	$(LIBFT_SRCS)/ft_strmapi.c $(LIBFT_SRCS)/ft_striteri.c $(LIBFT_SRCS)/ft_putchar_fd.c \
    	$(LIBFT_SRCS)/ft_putstr_fd.c $(LIBFT_SRCS)/ft_putendl_fd.c $(LIBFT_SRCS)/ft_putnbr_fd.c \
		$(LIBFT_SRCS)/ft_lstnew.c $(LIBFT_SRCS)/ft_lstadd_front.c \
		$(LIBFT_SRCS)/ft_lstsize.c $(LIBFT_SRCS)/ft_lstlast.c \
		$(LIBFT_SRCS)/ft_lstadd_back.c $(LIBFT_SRCS)/ft_lstdelone.c \
		$(LIBFT_SRCS)/ft_lstclear.c $(LIBFT_SRCS)/ft_lstiter.c $(LIBFT_SRCS)/ft_lstmap.c \
		$(FT_PRINTF_SRCS)/ft_outchar.c $(FT_PRINTF_SRCS)/ft_outstr.c \
		$(FT_PRINTF_SRCS)/ft_printf_c.c $(FT_PRINTF_SRCS)/ft_printf.c \
		$(FT_PRINTF_SRCS)/ft_printf_d.c $(FT_PRINTF_SRCS)/ft_printf_large_x.c \
		$(FT_PRINTF_SRCS)/ft_printf_s.c $(FT_PRINTF_SRCS)/ft_printf_x.c	\
		$(FT_PRINTF_SRCS)/ft_putunbr_base.c $(FT_PRINTF_SRCS)/ft_printf_i.c \
		$(FT_PRINTF_SRCS)/ft_printf_p.c $(FT_PRINTF_SRCS)/ft_printf_u.c \
		$(FT_PRINTF_SRCS)/ft_putnbr_base.c $(GET_NEXT_LINE_SRCS)/get_next_line.c

OBJS = $(SRCS:.c=.o)

INCLUDES = ./includes


RESET = \033[0m
BOLD = \033[1m
DIM = \033[2m
UNDERLINE = \033[4m
BLINK = \033[5m
INVERT = \033[7m
LIGHT_BLUE = \033[94m
YELLOW = \033[93m


all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
	
$(NAME):
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