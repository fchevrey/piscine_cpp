# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/25 11:28:24 by fchevrey          #+#    #+#              #
#    Updated: 2019/04/02 22:36:13 by fchevrey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

HEADER_DIR = includes/

SRC_C =  main.cpp

HEADER = Data.hpp

HEADERS = $(addprefix $(HEADER_DIR), $(HEADER))

OBJS_DIR = ./objs
OBJS = $(SRC_C:.cpp=.o)
SRC_O = $(addprefix $(OBJS_DIR)/, $(OBJS))

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE = -I includes/

all: $(HEADERS) $(NAME)

$(OBJS_DIR)/%.o:%.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(INCLUDE)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

TEST: $(HEADER) $(SRC_O)
	$(CC) -o $(NAME) $(INCLUDE) $(SRC_O)

$(NAME): $(OBJS_DIR) $(SRC_O)
	$(CC) -o $(NAME) $(INCLUDE) $(CFLAGS) $(SRC_O) 

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
