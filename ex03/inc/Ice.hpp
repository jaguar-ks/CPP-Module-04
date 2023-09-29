/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:55:30 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 05:56:28 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice( void );
        Ice( Ice const &obj );
        Ice &operator=( Ice const &obj );
        ~Ice( void );
        AMateria* clone( void ) const;
        void use( ICharacter& target );
};
