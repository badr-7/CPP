EXEC = megaphone

CC = c++

CFLAGS = -Wextra -Wall -Werror -std=c++98

SRCS = megaphone.cpp\

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all : $(EXEC)

$(EXEC) : ${OBJS} 
		${CC} ${CFLAGS} ${OBJS} -o ${EXEC}

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(EXEC)

re : fclean $(NAME)