EXEC = fight

HEADR = HumanB.hpp

CC = c++

CFLAGS = -Wextra -Wall -Werror -std=c++98

SRC =	main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\

OBJS = ${SRC:.cpp=.o}

all : ${EXEC}

${EXEC} : ${OBJS} ${HEADR}
		${CC} ${CFLAGS} ${OBJS} -o ${EXEC}

clean : 
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${EXEC}

re : fclean all