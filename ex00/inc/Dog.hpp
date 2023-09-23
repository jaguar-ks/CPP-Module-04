/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:55:05 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 03:10:46 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog( void );
        Dog( Dog const &obj );
        Dog &operator=( Dog const &obj );
        ~Dog( void );
        void makeSound( void ) const;
};
