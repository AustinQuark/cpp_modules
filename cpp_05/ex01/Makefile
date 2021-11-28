# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avieira <avieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:34:08 by avieira           #+#    #+#              #
#    Updated: 2021/11/28 17:47:04 by avieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = sources/main.cpp \
		sources/Bureaucrat.cpp \
		sources/Form.cpp


RM = rm -rf
OBJS = $(SRCS:%.cpp=%.o)

START_STYLE = \033[1;32m
END_STYLE = \033[0m

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