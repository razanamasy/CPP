SRC = main Fixed\

SRCS = $(addsuffix .cpp, ${SRC})

OBJS = ${SRCS:.cpp=.o}

CC	= c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fixed00

.cpp.o:
	$(CC) ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS} ${LIBMLX}
	$(CC) ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
