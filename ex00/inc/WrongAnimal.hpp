/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:06:45 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/27 04:37:07 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( WrongAnimal const &obj );
        WrongAnimal &operator=( WrongAnimal const &obj );
        ~WrongAnimal( void );
        void setType( std::string const &type );
        std::string getType( void ) const;
        virtual void makeSound( void ) const;
};
