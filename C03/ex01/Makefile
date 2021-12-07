NAME = fixed_point_number

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp

CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJS = ${SRCS:%.cpp=%.o}

all: ${NAME}

.cpp.o:
	${CPP} ${CPPFLAGS} -c $@ -o $<

${OBJS}: ${HEADERS} ${SRCS}
	${CPP} ${CPPFLAGS} -c ${SRCS}

${NAME} : ${OBJS}
	${CPP} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
