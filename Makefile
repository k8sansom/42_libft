NAME = libft.a
#Name of our executable file

INCLUDE = ./libft.h
#It's for header

CC = cc
CCFLAG = -Wall -Wextra -Werror
#for compile and compile flags

RM = rm -f
#for delete(clean) files

SRCS = 
#our source files. I want to check it so just use two example files

OBJS = $(SRCS:.c=.o)
#our objects files. SRCS.c -> SRCS.o It means it ganna be chage the end of file from .c to .o. File name is same.

all: $(NAME)
#It is default command of Makefile. It follow the rule of $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CCFLAG) $(OBJS) -o $(NAME)
#It links OBJS files and makes a executable file

%.o: %.c
	$(CC) $(CCFLAG) -c $< -o $@
#make all .c files change to .o / -c: compile $<: first dependency file(here .c files) -o: option(for name of executable file like a.out) $@: target(here .o files)

clean:
	$(RM) $(OBJS)
#delete all object files

fclean: clean
	$(RM) $(NAME)
#delete all object files and rush-02

re: fclean all
#restart. clean and start all again

.PHONY: all clean fclean re
#ignore same file name like 'all', 'clean', etc.
