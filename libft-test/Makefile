NAME		= test

SRCS		= main.c	${wildcard srcs/*.c}

OBJS		= ${SRCS:.c=.o}

LIB			= ft
LIBDIR		= ../libft

CC			= cc

CFLAGS		= -Wall -Wextra -Werror -Iincludes

RM			= rm -f

all:	libft ${NAME}

libft:
		cd ../libft && make

${NAME}:${OBJS} ${LIBDIR}/libft.a
		${CC} ${CFLAGS} ${OBJS} -L${LIBDIR} -l${LIB} -o ${NAME}

%.o:	%.c
		${CC} ${CFLAGS} -c  $< -o $@

clean:
		${RM} ${OBJS}
		cd ../libft && make clean

fclean:	clean
		${RM} ${NAME}
		cd ../libft && make fclean

libft_re:
		cd ../libft && make re

re:		fclean all

.PHONY: all clean fclean re
