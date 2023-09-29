/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 06:16:29 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 06:27:01 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource( void ){
    _index = 0;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &obj ){
    *this = obj;
}

MateriaSource::~MateriaSource( void ){
    for (int i = 0; i < 4; i++)
        delete _materia[i];
}

MateriaSource &MateriaSource::operator=( MateriaSource const &obj ){
    if (this != &obj){
        for (int i = 0; i < 4; i++)
            _materia[i] = obj._materia[i]->clone();
        _index = obj._index;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m){
    if (_index < 4 && m != NULL)
        _materia[_index++] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (_materia[i] != NULL && _materia[i]->getType() == type)
            return (_materia[i]->clone());
    }
    return (NULL);
}
