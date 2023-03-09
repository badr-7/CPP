EXEC = Zombie_Horde

HEADR = Zombie.hpp

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=c++98

SRC =	main.cpp\
		zombieHorde.cpp\
		Zombie.cpp\

OBJS = ${SRC:.cpp=.o}

all : ${EXEC}

${EXEC} : ${OBJS} ${HEADR}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${EXEC}

clean : 
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${EXEC}

re : fclean all