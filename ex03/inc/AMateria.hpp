/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:36:57 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 06:25:04 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
    protected:
        std::string const _type;
    public:
        AMateria( std::string const &type );
        AMateria( AMateria const &obj );
        AMateria &operator=( AMateria const &obj );
        AMateria( void );
        virtual ~AMateria( void );
        std::string const &getType( void ) const;
        virtual AMateria* clone( void ) const = 0;
        virtual void use( ICharacter& target );
};
