/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:11:39 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/27 04:33:43 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat( void );
        WrongCat( WrongCat const &obj );
        WrongCat &operator=( WrongCat const &obj );
        ~WrongCat( void );
        void makeSound( void ) const;
};
