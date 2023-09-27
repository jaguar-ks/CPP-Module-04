/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:15:34 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/27 04:34:06 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
    std::cout << "<WrongAnimal> Default Constructor called" << std::endl;
    this->type = "Default";
}

WrongAnimal::WrongAnimal( WrongAnimal const &obj ){
    std::cout << "<WrongAnimal> Copy Constructor called" << std::endl;
    *this = obj;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &obj ){
    if(this != &obj)
        this->type = obj.getType();
    return *this;
}

WrongAnimal::~WrongAnimal( void ){
    std::cout << "<WrongAnimal> Destructor called" << std::endl;
}

std::string WrongAnimal::getType( void ) const{
    return this->type;
}

void WrongAnimal::setType( std::string const &type ){
    this->type = type;
}

void WrongAnimal::makeSound( void ) const{
    std::cout << "Wrong Sound" << std::endl;
}
