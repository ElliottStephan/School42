# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estephan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/15 18:16:32 by estephan          #+#    #+#              #
#    Updated: 2017/01/17 20:48:37 by estephan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re norme

CC = gcc

FLAGS = -Wall -Wextra -Werror

CPP_FLAGS = -Iinclude

NAME = push_swap

NAME2 = checker

SRC_PATH = ./src
LIB_PATH = ./lib
INC_PATH = ./include
OBJ_PATH = ./obj
OBJLIB_PATH = ./obj

SRC2_PATH = ./src2
INC2_PATH = ./include2
OBJ2_PATH = ./obj2

SRC_NAME =	ft_bonusdisplaystack.c\
			ft_display.c\
			ft_dynamicalgorithm.c\
			ft_error.c\
			ft_operations.c\
			ft_optimization.c\
			ft_parsing.c\
			ft_sortmin.c\
			push_swap.c

SRC2_NAME = checker.c\
			ft_error.c\
			ft_operator.c\
			ft_parsing.c\
			ft_strcmp2.c\
			ft_strjoin.c\
			get_next_line.c

LIB_NAME = 	ft_atoi.c\
			ft_isascending.c\
			ft_isdescending.c\
			ft_isdigit.c\
			ft_issort.c\
			ft_lstappend.c\
			ft_pslstnew.c\
			ft_lstutils.c\
			ft_power.c\
			ft_strcmp.c

INC_NAME = push_swap.h

INC2_NAME = checker.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ2_NAME = $(SRC2_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
SRC2 = $(addprefix $(SRC2_PATH)/, $(SRC2_NAME))

LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
INC2 = $(addprefix $(INC2_PATH)/, $(INC2_NAME))

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJ2 = $(addprefix $(OBJ2_PATH)/,$(OBJ2_NAME))
OBJLIB = $(addprefix $(OBJLIB_PATH)/,$(OBJLIB_NAME))

all: $(NAME) $(NAME2)

$(NAME): $(OBJ) $(OBJLIB)
	@make -C ft_printf/
	@$(CC) -o $@ $^ ft_printf/libftprintf.a

$(NAME2): $(OBJ2) $(OBJLIB)
	@$(CC) -o $@ $^ ft_printf/libftprintf.a

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -c -o $@ $<

$(OBJ2_PATH)/%.o: $(SRC2_PATH)/%.c
	@mkdir $(OBJ2_PATH) 2> /dev/null || true
	@$(CC) -c -o $@ $<

$(OBJLIB_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir $(OBJLIB_PATH) 2> /dev/null || true
	@$(CC) -c -o $@ $<

clean:
	@make clean -C ft_printf/
	@rm -rf ./obj correctme.sh
	@echo "\033[1;34mPush_swap\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@make fclean -C ft_printf/
	@rm -rf $(NAME)
	@echo "\033[1;34mPush_swap\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

norme:
	@norminette $(SRC) $(LIB) $(INC)
	@echo "\033[1;34mPush_swap\t\033[1;33mNorme\t\033[0;32m[OK]\033[0m"
	@norminette ft_printf/
	@echo "\033[1;34mLibftprintf\t\033[1;33mNorme\t\033[0;32m[OK]\033[0m"
