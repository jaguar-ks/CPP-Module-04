/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:47:26 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 05:41:04 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>
#include<iostream>

class Animal {
    protected:
        std::string Type;
    public:
        Animal( void );
        Animal( Animal const &obj );
        Animal &operator=( Animal const &obj );
        virtual ~Animal( void );
        std::string getType( void ) const;
        void setType( std::string const type );
        virtual void makeSound( void ) const;
};
