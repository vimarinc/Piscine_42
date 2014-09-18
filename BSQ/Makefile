#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghubault <ghubault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/15 11:37:25 by ghubault          #+#    #+#              #
#    Updated: 2014/09/16 23:19:48 by ghubault         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =		bsq

HPATH =		ft.h 

SRCS =		*.c

OBJS = 		*.o

FLAGS =		-Wall -Wextra -Werror

all: $(NAME)

$(NAME):	
		gcc $(FLAGS) -c $(SRCS) -I.
		gcc $(FLAGS) -o $(NAME) -I. $(OBJS)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
