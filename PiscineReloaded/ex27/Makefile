# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estephan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 17:04:14 by estephan          #+#    #+#              #
#    Updated: 2016/11/04 10:49:27 by estephan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) $(NAME).o

clean:
		/bin/rm -f $(NAME).o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
