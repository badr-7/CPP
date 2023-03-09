EXEC = Harl

HEADR = Harl.hpp

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=c++98

SRC =	main.cpp\
		Harl.cpp\

OBJS = ${SRC:.cpp=.o}

all : ${EXEC}

${EXEC} : ${OBJS} ${HEADR}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${EXEC}

clean : 
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${EXEC}

re : fclean all