# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estephan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 13:54:19 by estephan          #+#    #+#              #
#    Updated: 2017/03/07 16:47:22 by estephan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libft.a

SRC =ft_strcat.c ft_strcpy.c ft_strncat.c ft_strstr.c ft_strchr.c ft_strdup.c \
ft_strncmp.c ft_strcmp.c ft_strlen.c ft_strncpy.c ft_strnstr.c \
ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_isalnum.c \
ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c \
ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
ft_strtrim.c ft_strsplit.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
ft_tabdel.c

F =-Wall -Werror -Wextra

CO =$(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c $(F) $(SRC) -I includes 
		ar rc $(NAME) $(CO)
		ranlib $(NAME)

clean:
		rm -rf $(CO)

fclean: clean
		rm -rf $(NAME)

re: fclean all
