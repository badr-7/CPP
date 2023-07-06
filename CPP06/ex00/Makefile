# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/29 11:30:46 by mel-hous          #+#    #+#              #
#    Updated: 2023/07/04 07:12:06 by mel-hous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = ScalarConvert

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SRC =	ScalarConverter.cpp\
		main.cpp\
		

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