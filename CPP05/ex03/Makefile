# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 10:29:54 by mel-hous          #+#    #+#              #
#    Updated: 2023/06/22 17:56:36 by mel-hous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Bureaucrat

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SRC =	Bureaucrat.cpp\
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