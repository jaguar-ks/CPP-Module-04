/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 06:08:10 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 06:11:00 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character( void ){
}

Character::Character( std::string const &name ) : _name(name){
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character( Character const &obj ){
    *this = obj;
}

Character::~Character( void ){
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

Character &Character::operator=( Character const &obj ){
    if (this != &obj)
    {
        this->_name = obj.getName();
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = obj._inventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName( void ) const{
    return (this->_name);
}

void Character::equip( AMateria* m ){
    for (int i = 0; i < 4; i++){
        if (this->_inventory[i] == NULL){
            this->_inventory[i] = m;
            break;
        }
    }
}

void Character::unequip( int idx ){
    if (idx >= 0 && idx < 4)
        this->_inventory[idx] = NULL;
}

void Character::use( int idx, ICharacter& target ){
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
}
