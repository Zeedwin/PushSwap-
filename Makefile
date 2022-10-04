NAME = push_swap

SRCS =  $(wildcard src/*.c utils/*.c algo/*.c moves/*.c)
CHECK_SRCS = $(wildcard utils/*.c)

OBJS = ${SRCS:.c=.o}
CHECK_OBJS = ${CHECK_SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

RM = rm -rf

all: ${NAME} ${CHECK}
${NAME}: ${OBJS}
	@${MAKE} -C ./Libft1
<<<<<<< HEAD
	@${CC} ${CFLAGS} ${OBJS} ./Libft1/Libft.a -o ${NAME}

${CHECK}: ${CHECK_OBJS} 
	@${CC} ${CFLAGS} ${CHECK_OBJS} ./Libft1/Libft.a -o ${CHECK}
=======
	@${CC} ${CFLAGS} ${OBJS} ./Libft1/libft.a -o ${NAME}

${CHECK}: ${CHECK_OBJS} 
	@${CC} ${CFLAGS} ${CHECK_OBJS} ./Libft1/libft.a -o ${CHECK}
>>>>>>> 2cc61c812a61fa5f64ec223481d5c1e9f1de025f

clean: 
	@${MAKE} -C ./Libft1 fclean
	@${RM} ${OBJS}
	@${RM} ${CHECK_OBJS}

fclean: clean
	@${RM} ${NAME}
	@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re