# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avieira <avieira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 12:34:08 by avieira           #+#    #+#              #
#    Updated: 2021/11/03 18:39:21 by avieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
		phonebook.cpp \
		contact.cpp

RM = rm -rf
OBJS = $(SRCS:.cpp=.o)

START_STYLE = \033[1;32m
END_STYLE = \033[0m

all : $(NAME)

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
