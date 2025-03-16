NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./inc
SRC_DIR = src/
INC_DIR = inc/

SRCS = src/ft_printf.c \
 		src/ft_putchar.c \
		src/ft_putstr.c \
		src/ft_putunbr.c \
		src/ft_putnbr.c \
		src/ft_putptr.c \
		src/ft_puthex.c

OBJS = $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) and object files cleaned."

re: fclean all

test: $(NAME)
	$(CC) -Wall -Wextra -Werror main.c $(NAME) -o test_program
	./test_program

all: $(NAME)

.PHONY: all clean fclean re test