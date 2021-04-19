# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaela <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/18 14:03:12 by lbaela            #+#    #+#              #
#    Updated: 2021/04/19 17:37:46 by lbaela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES =	ft_strlen.c		ft_isalpha.c	ft_bzero.c		ft_memset.c		ft_memcpy.c\
			ft_memccpy.c	ft_memmove.c	

CFILES_B =

OBJS = $(CFILES:.c=.o)

OBJS_B = $(CFILES_B:.c=.o)

CC = cc

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $?

%.o : %.c
	$(CC) -c $(FLAGS) $< -o $@

bonus :
	make OBJS="$(OBJS_B)" all

test : $(NAME) main.c
	$(CC) $(FLAGS) main.c -L. -lft -o test

clean :
	rm -f $(OBJS) $(OBJS_B)

fclean : clean
	rm -f $(NAME) test

re : fclean all

.PHONY : all clean fclean re bonus