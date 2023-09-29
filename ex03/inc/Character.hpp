/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:54:22 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 05:55:08 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter{
    private:
        std::string _name;
        AMateria *_inventory[4];
    public:
        Character( std::string const &name );
        Character( Character const &obj );
        Character &operator=( Character const &obj );
        Character( void );
        ~Character( void );
        std::string const &getName( void ) const;
        void equip( AMateria* m );
        void unequip( int idx );
        void use( int idx, ICharacter& target );
};
