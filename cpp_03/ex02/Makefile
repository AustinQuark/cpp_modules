# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avieira <avieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:34:08 by avieira           #+#    #+#              #
#    Updated: 2021/11/13 13:40:59 by avieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = sources/main.cpp \
		sources/ClapTrap.cpp \
		sources/ScavTrap.cpp \
		sources/FragTrap.cpp

RM = rm -rf
OBJS = $(SRCS:%.cpp=%.o)

START_STYLE = \033[1;32m
END_STYLE = \033[0m

all : $(NAME)

%.o: %.cpp
	@($(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o))

$(NAME): $(OBJS)
	@(printf "$(START_STYLE)Compiling...\n$(END_STYLE)")
	@($(CC) $(CFLAGS) -o $(NAME) $(OBJS))
	@(printf "$(START_STYLE)Done.\n$(END_STYLE)")

clean:
	@(printf "$(START_STYLE)Cleaning...\n$(END_STYLE)")
	@($(RM) $(OBJS))
	@(printf "$(START_STYLE)Done.\n$(END_STYLE)")

fclean: clean
	@(printf "$(START_STYLE)Fcleaning...\n$(END_STYLE)")
	@($(RM) $(NAME))
	@(printf "$(START_STYLE)Done.\n$(END_STYLE)")

re: fclean all

.PHONY: all clean fclean re