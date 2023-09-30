/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 06:07:09 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/30 03:48:39 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure( void ) : AMateria("cure"){
}

Cure::Cure( Cure const &obj ) : AMateria(obj) {
    *this = obj;
}

Cure::~Cure( void ){
}

Cure &Cure::operator=( Cure const &obj ){
    (void)obj;
    return (*this);
}

AMateria* Cure::clone( void ) const{
    return (new Cure());
}

void Cure::use( ICharacter& target ){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
