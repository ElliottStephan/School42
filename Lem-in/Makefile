# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estephan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/09 15:16:39 by estephan          #+#    #+#              #
#    Updated: 2017/03/09 17:30:15 by estephan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = lem_in

SRC_DIR = src/

SRC =	ft_is_room.c\
		ft_list.c\
		ft_parsing.c\
		ft_errors.c\
		ft_links.c\
		ft_nb_ants.c\
		utils.c\
		utils_2.c\
		get_next_line.c\
		lem_in.c\
		ft_add_pos.c\
		ft_move_ants.c\
		list_utils.c\
		norm.c

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
	   list_utils.o\
	   norm.o

INC_NAME = lem_in.h

LIB = libft/

all: lib printf $(NAME)

lib:
	@make -C $(LIB)

printf:
	@make -C ft_printf

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $@ $^ -L $(LIB) -lft ft_printf/libftprintf.a

%.o: $(SRC_DIR)%.c
	@$(CC) $(FLAGS) -c $< -I $(LIB)

clean:
	@make -C $(LIB) clean
	@rm -f $(OBJS)
	@echo "\033[1;34mLem_in\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@make -C $(LIB) fclean
	@rm -f $(NAME)
	@echo "\033[1;34mLem_in\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

norme:
	@norminette $(SRCS)

.PHONY: all lib printf clean fclean re norme
