/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:55:05 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 05:32:41 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog( void );
        Dog( Dog const &obj );
        Dog &operator=( Dog const &obj );
        ~Dog( void );
        void makeSound( void ) const;
        Brain *getBrain( void ) const;
        void setBrain( Brain *brain );  
};
