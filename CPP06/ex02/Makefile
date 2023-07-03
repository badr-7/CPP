# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 08:31:47 by mel-hous          #+#    #+#              #
#    Updated: 2023/07/02 08:55:47 by mel-hous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Serializer

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SRC =	Base.cpp\
		main.cpp\
		

OBJS = ${SRC:.cpp=.o}

DEP = ${SRC:.cpp=.d}

all : ${EXEC}

${EXEC} : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${EXEC} 

clean : 
		${RM} ${OBJS} ${DEP}

fclean : clean
		${RM} ${EXEC} *_shrubbery

re : fclean all

-include ${DEP}