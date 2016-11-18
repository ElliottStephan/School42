NAME = fillit
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = fillit.c\
	   check_and_build.c\
	   smallest_square.c\
	   backtracking.c\
	   list.c\
	   del.c\
	   check.c
OBJS = $(SRCS:.c=.o)
LIB = libft/
INCLUDES = ./

$(NAME): lib
	$(CC) $(FLAGS) -I $(LIB)/includes -c $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) -L $(LIB) -lft

lib:
	make -C $(LIB)

all: $(NAME)

clean:
	make -C $(LIB) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIB) fclean
	rm -f $(NAME)

re: fclean all

norme:
	norminette $(SRCS) fillit.h
