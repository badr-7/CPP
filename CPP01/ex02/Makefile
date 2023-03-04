EXEC = BRAIN

CC = c++

CFLAGS = -Wextra -Wall -Werror -std=c++98

all : ${EXEC}

${EXEC} : main.o
		${CC} ${CFLAGS} main.o  -o ${EXEC}

clean : 
		rm -rf main.o

fclean : clean
		rm -rf ${EXEC}

re : fclean all