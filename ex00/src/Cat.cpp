/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:08:17 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 03:23:10 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat( void ){
    std::cout << "Default Constructor of <CAT> is called" << std::endl;
    this->Type = "Cat";
}

Cat::Cat( Cat const &obj ){
    std::cout << "Copy Constructor of <CAT> is called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=( Cat const &obj ){
    if (this != &obj)
        this->Type = obj.getType();
    return *this;
}

Cat::~Cat( void ){
    std::cout << "Default Destructor of <CAT> is called" << std::endl;
}

void Cat::makeSound( void ) const {
    std::cout << "Miaouuuu" << std::endl;
}
