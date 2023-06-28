# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/23 10:29:54 by mel-hous          #+#    #+#              #
#    Updated: 2023/06/28 15:33:57 by mel-hous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = Bureaucrat

RM = rm -rf

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98

SRC =	Bureaucrat.cpp\
		AForm.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp\
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