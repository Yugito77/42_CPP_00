# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 14:59:11 by hcherpre          #+#    #+#              #
#    Updated: 2022/10/12 12:18:53 by hcherpre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		PhoneBook

SRCS =		PhoneBook.cpp Contact.cpp main.cpp Contact_Get.cpp utils.cpp

C++ =		c++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

all:		${NAME}

${NAME}:	
	@${C++} ${CFLAGS} ${SRCS} -o ${NAME}

clean:		
	@${RM}

fclean:		clean
	@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re