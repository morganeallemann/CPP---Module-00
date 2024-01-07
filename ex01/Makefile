# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 13:39:48 by malleman          #+#    #+#              #
#    Updated: 2023/03/15 17:05:37 by malleman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#-------------------------- SOURCES -------------------------------------------#
SRCS 		=	Contact.cpp PhoneBook.cpp main.cpp \

#--------------------------	VARIABLES -----------------------------------------#
NAME		= MyAwesomePhoneBook

OBJS		= ${SRCS:.cpp=.o}

CC			= g++
CFLAGSDDBUG	= -Wall -Wextra -Werror -std=c++98
CFLAGS		= -Wall -Wextra -Werror -std=c++98
#-------------------------- COMMANDES -----------------------------------------#
all: 	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re: 	fclean all

.PHONY: all clean fclean re