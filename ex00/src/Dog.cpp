/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:10:48 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/30 02:52:18 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ){
    std::cout << "Default Constructor of <DOG> is called" << std::endl;
    this->Type = "Dog";
}

Dog::Dog( Dog const &obj ) : Animal(obj) {
    std::cout << "Copy Constructor of <DOG> is called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=( Dog const &obj ){
    if (this != &obj)
        this->Type = obj.getType();
    return *this;
}

Dog::~Dog( void ){
    std::cout << "Default Destructor of <DOG> is called" << std::endl;
}

void Dog::makeSound( void ) const {
    std::cout << "Wouafff" << std::endl;
}
