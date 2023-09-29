/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:59:44 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 06:24:52 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria( void ){
}

AMateria::AMateria( std::string const &type ) : _type(type){
}

AMateria::AMateria( AMateria const &obj ){
    *this = obj;
}

AMateria::~AMateria( void ){
}

AMateria &AMateria::operator=( AMateria const &obj ){
    (void)obj;
    return (*this);
}

std::string const &AMateria::getType( void ) const{
    return (this->_type);
}

void AMateria::use( ICharacter& target ){
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->_type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

