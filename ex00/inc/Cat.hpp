/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:52:10 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 03:10:37 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat( void );
        Cat( Cat const &obj );
        Cat &operator=( Cat const &obj );
        ~Cat( void );
        void makeSound( void ) const;
};
