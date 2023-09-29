# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 07:47:39 by faksouss          #+#    #+#              #
#    Updated: 2023/09/29 06:25:47 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp\
		AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp\

SRC_DIR = src

OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

HDR = inc/AMateria.hpp\
		inc/Character.hpp\
		inc/Cure.hpp\
		inc/Ice.hpp\
		inc/ICharacter.hpp\
		inc/IMateriaSource.hpp\
		inc/MateriaSource.hpp

INC = -I inc

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Matreia

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HDR)
	mkdir -p $(OBJ_DIR)
	c++ $(FLAGS) -c $(INC) $< -o $@

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean

.SILENT : all re clean fclean $(NAME) $(OBJ)
