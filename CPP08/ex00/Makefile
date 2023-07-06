# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 17:58:06 by mel-hous          #+#    #+#              #
#    Updated: 2023/07/05 09:29:33 by mel-hous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = easyfind

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SRC =	main.cpp

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