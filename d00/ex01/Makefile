# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 17:05:18 by fchevrey          #+#    #+#              #
#    Updated: 2018/06/10 19:03:23 by fchevrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

HEADER_DIR = includes/

SRC_C = Contact.class.cpp Agenda.class.cpp main.cpp

HEADER = Contact.class.hpp Agenda.class.hpp

HEADERS = $(addprefix $(HEADER_DIR), $(HEADER))

CC = g++

CFLAGS = -Wall -Werror -Wextra

SRC_O = $(SRC_C:.cpp=.o)

INCLUDE = -I includes/

all: $(HEADERS) $(NAME)

%.o:%.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(INCLUDE)

TEST: $(HEADER) $(SRC_O)
	$(CC) -o $(NAME) $(INCLUDE) $(SRC_O)

$(NAME): $(SRC_O)
	$(CC) -o $(NAME) $(INCLUDE) $(CFLAGS) $(SRC_O) 
clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, all
