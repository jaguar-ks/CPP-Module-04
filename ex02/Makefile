# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 03:13:47 by faksouss          #+#    #+#              #
#    Updated: 2023/09/23 05:37:14 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ_DIR = obj

SRC_DIR = src

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

HDR = inc/Animal.hpp inc/Dog.hpp inc/Cat.hpp inc/Brain.hpp

INC = -I inc

NAME = Animal

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HDR)
	mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJ) all re fclean clean $(NAME)
