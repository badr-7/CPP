EXEC = PhoneBook

CXXFLAGS = -Wextra -Werror -Wall -std=c++98 -g

CC = c++

RM = rm -f

SRC =	main.cpp\
		PhoneBook.cpp\
		Contact.cpp\

OBJ = ${SRC:.cpp=.o}

all : $(EXEC)

${EXEC} : ${OBJ}
		${CC} ${CXXFLAGS} ${OBJ} -o ${EXEC}

clean :
	${RM} ${OBJ}

fclean : clean
		${RM} ${EXEC}

re : fclean all