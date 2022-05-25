NAME = libft.a

SRCS = *.c

OBJS = ${SRCS:.c=.o}

CC	= gcc
rm	= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re