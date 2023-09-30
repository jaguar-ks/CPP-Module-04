/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 06:05:02 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/30 03:48:51 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice( void ) : AMateria("ice"){
}

Ice::Ice( Ice const &obj ) : AMateria(obj) {
    *this = obj;
}

Ice::~Ice( void ){
}

Ice &Ice::operator=( Ice const &obj ){
    (void)obj;
    return (*this);
}

AMateria* Ice::clone( void ) const{
    return (new Ice());
}

void Ice::use( ICharacter& target ){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
