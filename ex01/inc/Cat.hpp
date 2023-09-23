/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:52:10 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 05:31:38 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat( void );
        Cat( Cat const &obj );
        Cat &operator=( Cat const &obj );
        ~Cat( void );
        void makeSound( void ) const;
        Brain *getBrain( void ) const;
        void setBrain( Brain *brain );
};
