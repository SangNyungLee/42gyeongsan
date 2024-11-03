CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADER = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c
OBJECTS = $(SRCS:.c=.o)

#보너스 파일
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONus_OBJ = $(BONUS_SRC:.c=.o)

# 라이브러리 파일 생성
all: $(NAME)

# 오브젝트 파일 생성
%.o: %.c ${HEADER}
	$(CC) $(CFLAGS) -c $< -o $@

# 라이브러리 파일 생성
$(NAME): $(OBJECTS)
	ar rcs $@ $^

# 보너스 규칙
bonus : $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# 생성된 오브젝트 파일 제거
clean:
	rm -rf $(OBJECTS) $(BONUS_OBJ)

# 생성된 오브젝트 파일 제거 및 생성된 라이브러리 파일 제거
fclean: clean
	rm -rf $(NAME)

# 생성된 오브젝트 파일, 생성된 라이브러리 파일 제거 후 다시 라이브러리 파일과 오프젝트 파일 생성
re: fclean all

.PHONY: all clean fclean re bonus