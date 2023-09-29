/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 06:15:40 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 06:26:17 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria *_materia[4];
        int _index;
    public:
        MateriaSource( void );
        MateriaSource( MateriaSource const &obj );
        MateriaSource &operator=( MateriaSource const &obj );
        ~MateriaSource( void );
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
