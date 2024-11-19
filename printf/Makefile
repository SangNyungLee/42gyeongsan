CC := cc
CFLAGS := -Wall -Wextra -Werror
SRCS := ft_printf_char.c ft_printf_hexa.c ft_printf_int.c ft_printf_pointer.c ft_printf_string.c ft_printf_unsignint.c ft_printf.c
OBJS := $(SRCS:.c=.o)
NAME := libftprintf.a

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BON_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
