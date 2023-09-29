/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:57:04 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 05:57:21 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure( void );
        Cure( Cure const &obj );
        Cure &operator=( Cure const &obj );
        ~Cure( void );
        AMateria* clone( void ) const;
        void use( ICharacter& target );
};
