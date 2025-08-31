# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyildiz <gyildiz@student.42istanbul.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/28 18:34:11 by gyildiz           #+#    #+#              #
#    Updated: 2025/08/29 18:12:36 by gyildiz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
EXE_NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXE_NAME)

$(EXE_NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE_NAME)

fclean: clean
	rm -rf $(EXE_NAME)

clean: 
	rm -rf $(OBJS)

re: fclean all

.PHONY: all fclean clean re
