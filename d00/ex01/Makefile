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

NAME = megaphone

SRC_C = megaphone.cpp

CC = g++

CFLAGS = -Wall -Werror -Wextra #$(INCLUDE)

SRC_O = $(SRC_C:.cpp=.o)

#INCLUDE = -I includes/

all: $(NAME)

%.o:%.cpp
	$(CC) -o $@ $(CFLAGS) -c $<

$(NAME): $(SRC_O)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC_O)

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, all
