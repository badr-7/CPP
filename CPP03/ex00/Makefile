EXEC = Trap

HEADR = ClapTrap.hpp

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\
		ClapTrap.cpp\

OBJS = ${SRC:.cpp=.o}

all : ${EXEC}

${EXEC} : ${OBJS} ${HEADR}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${EXEC} 

clean : 
		${RM} ${OBJS}

fclean : clean
		${RM} ${EXEC}

re : fclean all