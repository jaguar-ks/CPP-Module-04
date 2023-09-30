/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:10:48 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/30 03:44:57 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ){
    std::cout << "Default Constructor of <DOG> is called" << std::endl;
    this->Type = "Dog";
    this->brain = new Brain();
}

Dog::Dog( Dog const &obj ) : Animal(obj){
    std::cout << "Copy Constructor of <DOG> is called" << std::endl;
    *this = obj;
}

Dog &Dog::operator=( Dog const &obj ){
    if (this != &obj){
        delete this->brain;
        Animal::operator=(obj);
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}

Dog::~Dog( void ){
    std::cout << "Default Destructor of <DOG> is called" << std::endl;
    delete this->brain;
}

void Dog::makeSound( void ) const {
    std::cout << "Wouafff" << std::endl;
}

Brain *Dog::getBrain( void ) const {
    return this->brain;
}

void Dog::setBrain( Brain *brain ) {
    this->brain = brain;
}
