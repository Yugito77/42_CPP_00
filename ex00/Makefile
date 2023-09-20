# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 17:53:58 by hcherpre          #+#    #+#              #
#    Updated: 2022/10/07 18:04:11 by hugoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =		megaphone

SRCS =		megaphone.cpp

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