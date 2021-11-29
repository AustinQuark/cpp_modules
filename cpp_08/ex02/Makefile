# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avieira <avieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:34:08 by avieira           #+#    #+#              #
#    Updated: 2021/11/29 01:40:59 by avieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = sources/main.cpp \
		sources/mutantstack.cpp 


RM = rm -rf
OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re