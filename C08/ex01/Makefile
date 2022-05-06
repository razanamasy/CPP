SRC = main Span\

SRCS = $(addsuffix .cpp, ${SRC})

OBJS = ${SRCS:.cpp=.o}

DEPS = ${OBJS:.o=.d}

CC	= c++

FLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = Span 

-include ${DEPS}

%.o:	%.cpp
	$(CC) ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS} ${LIBMLX}
	$(CC) ${FLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS} ${DEPS}

fclean:	clean
		rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re
