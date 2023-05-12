NAME = libft.a

INCLUDE = ./libft.h

CC = cc
CCFLAG = -Wall -Wextra -Werror

RM = rm -f

SRCS 	= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CCFLAG) -c $< -o $@
#make all .c files change to .o / -c: compile $<: first dependency file(here .c files) -o: option(for name of executable file like a.out) $@: target(here .o files)

clean:
	$(RM) $(OBJS)
#delete all object files

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS)
	$(RM) libft.so

re: fclean all
#restart. clean and start all again

.PHONY: all clean fclean re
#ignore same file name like 'all', 'clean', etc.

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS)
	$(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
