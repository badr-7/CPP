EXEC = replace

CXX = c++

CXXFLAGS = -Wextra -Wall -Werror -std=c++98

all : ${EXEC}

${EXEC} : main.o
		${CXX} ${CXXFLAGS} main.o  -o ${EXEC}

clean : 
		rm -rf main.o

fclean : clean
		rm -rf ${EXEC}

re : fclean all