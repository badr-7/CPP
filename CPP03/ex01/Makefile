EXEC = Trap

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MDD -std=c++98

SRC =	main.cpp\
		ScavTrap.cpp\
		ClapTrap.cpp\

OBJS = ${SRC:.cpp=.o}

DEP = ${SRC:.cpp=.d}

all : ${EXEC}

${EXEC} : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${EXEC} 

clean : 
		${RM} ${OBJS} ${DEP}

fclean : clean
		${RM} ${EXEC}

re : fclean all

-include ${DEP}