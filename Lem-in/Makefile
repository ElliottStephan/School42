.PHONY: all clean fclean re norme

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = lem_in

SRC =		src/ft_is_room.c\
			src/ft_list.c\
			src/ft_parsing.c\
			src/ft_errors.c\
			src/ft_links.c\
			src/ft_nb_ants.c\
			src/utils.c\
			src/utils_2.c\
			src/get_next_line.c\
			src/lem_in.c\
			src/ft_add_pos.c\
			src/ft_move_ants.c\
			src/list_utils.c

OBJS = ft_is_room.o\
	   ft_list.o\
	   ft_parsing.o\
	   ft_errors.o\
	   ft_links.o\
	   ft_nb_ants.o\
	   utils.o\
	   utils_2.o\
	   get_next_line.o\
	   lem_in.o\
	   ft_add_pos.o\
	   ft_move_ants.o\
	   list_utils.o

INC_NAME = lem_in.h

LIB = libft/


$(NAME): lib printf
	$(CC) $(FLAGS) -I $(LIB) -c $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) -L $(LIB) -lft ft_printf/libftprintf.a

lib:
	make -C $(LIB)

printf:
	make -C ft_printf
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
