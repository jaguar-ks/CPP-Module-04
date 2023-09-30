/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:08:17 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/30 03:12:28 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat( void ){
    std::cout << "Default Constructor of <CAT> is called" << std::endl;
    this->Type = "Cat";
    this->brain = new Brain();
}

Cat::Cat( Cat const &obj ) : Animal(obj) {
    std::cout << "Copy Constructor of <CAT> is called" << std::endl;
    *this = obj;
}

Cat &Cat::operator=( Cat const &obj ){
    if (this != &obj){
        delete this->brain;
        Animal::operator=(obj);
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}

Cat::~Cat( void ){
    std::cout << "Default Destructor of <CAT> is called" << std::endl;
    delete this->brain;
}

void Cat::makeSound( void ) const {
    std::cout << "Miaouuuu" << std::endl;
}

Brain *Cat::getBrain( void ) const {
    return this->brain;
}

void Cat::setBrain( Brain *brain ) {
    this->brain = brain;
}
