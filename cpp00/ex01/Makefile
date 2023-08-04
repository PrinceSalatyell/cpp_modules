# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 15:20:11 by salatiel          #+#    #+#              #
#    Updated: 2023/08/04 16:04:39 by salatiel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION VARS

SRCS	=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

OBJS	=	${SRCS:%.c=${DIR_OBJ}%.o}

NAME	=	PhoneBook

#DIRECTORIES

DIR_OBJ = objs/

#GCC & FLAGS

CC	=	c++

42FLAGS	=	-Wall -Werror -Wextra -std=c++98

GCC	=	${CC} ${42FLAGS}

#CLEAN

RM	=	rm -f

#COLORS

COLOUR_GREEN=\033[7;1;32m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[7;1;33m

# ================================ R U L E S ================================

all:	${NAME}

${NAME}:	${OBJS}
	@${GCC} -o ${NAME} ${OBJS} ${EXTRA_FLAGS}
	@echo "${COLOUR_GREEN} >>> ${NAME} Was Successfully compiled <<< ${COLOUR_END}"

${DIR_OBJ}%.o:%.c
	@mkdir -p ${dir $@}
	@${CC} ${42FLAGS} -c $< -o $@

clean:
	@${RM} -r ${DIR_OBJ}
	@echo "${COLOUR_YELLOW} >>> OBJECTS CLEANED <<< ${COLOUR_END}"

fclean:		clean
	@${RM} ${NAME}
	@echo "${COLOUR_YELLOW} >>> EVERYTHING CLEANED <<< ${COLOUR_END}"

re:	fclean all

.PHONY:	all clean fclean re