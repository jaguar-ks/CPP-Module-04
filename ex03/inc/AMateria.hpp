/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 07:58:22 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/24 08:06:38 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AMateria {
    protected:
        std::string const type;
    public:
        AMateria( void );
        AMateria( std::string const &type );
        AMateria( AMateria const &obj );
        AMateria &operator=( AMateria const &obj );
        ~AMateria( void );
        std::string const &getType( void ) const;
        void setType( std::string const &Type );
        virtual AMateria *clone( void ) const = 0;
        // virtual void use( ICharacter &target );
};
