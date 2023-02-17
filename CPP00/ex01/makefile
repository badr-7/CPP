EXEC = PhoneBook

FLAGS = -Wextra -Werror -Wall -std=c++98

CC = c++

RM = rm -f

SRC =	main.cpp\
		PhoneBook.cpp\

OBJ = ${SRC:.cpp=.o}

all : $(EXEC)

${EXEC} : ${OBJ}
		${CC} ${FLAGS} ${OBJ} -o ${EXEC}

clean :
	${RM} ${OBJ}

fclean : clean
		${RM} ${EXEC}

re : fclean all