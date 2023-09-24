/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 05:24:18 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/23 05:28:03 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Default Constructor of <Brain> is called" << std::endl;
}

Brain::Brain( Brain const &src ) {
    std::cout << "Copy Constructor of <Brain> is called" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Default Destructor of <Brain> called" << std::endl;
}

Brain &Brain::operator=(Brain const &src) {
    if (this != &src) {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.getIdea(i);
    }
    return *this;
}

std::string Brain::getIdea(int i) const {
    return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea) {
    this->ideas[i] = idea;
}
