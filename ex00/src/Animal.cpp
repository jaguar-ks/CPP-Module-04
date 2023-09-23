/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:58:22 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 03:23:05 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal( void ){
    std::cout << "Default Constructor of <ANIMAL> is called" << std::endl;
    this->Type = "Unknowen";
}

Animal::Animal( Animal const &obj ){
    std::cout << "Copy Constructor of <ANIMAL> is called" << std::endl;
    *this = obj;
}

Animal &Animal::operator=( Animal const &obj ){
    if (this != &obj)
        this->Type = obj.getType();
    return *this;
}

Animal::~Animal( void ){
    std::cout << "Default Destructor of <ANIMAL> is called" << std::endl;
}

std::string Animal::getType( void ) const {
    return this->Type;
}

void Animal::setType( std::string const type ){
    this->Type = type;
}

void Animal::makeSound( void ) const {
    std::cout << "Animal Sound Unknowen" << std::endl;
}
