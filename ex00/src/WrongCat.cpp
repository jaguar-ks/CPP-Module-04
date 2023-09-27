/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:24:05 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/27 04:34:12 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ){
    std::cout << "<WrongCat> Default Constructor called" << std::endl;
    this->type = "!Cat";
}

WrongCat::WrongCat( WrongCat const &obj ){
    std::cout << "<WrongCat> Copy Constructor called" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=( WrongCat const &obj ){
    if(this != &obj)
        this->type = obj.getType();
    return *this;
}

WrongCat::~WrongCat( void ){
    std::cout << "<WrongCat> Destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const{
    std::cout << "Wackwack" << std::endl;
}
