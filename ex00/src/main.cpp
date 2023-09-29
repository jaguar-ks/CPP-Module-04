/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:11:36 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/29 06:38:42 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main (){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    const WrongAnimal *pet1 = new WrongAnimal();
    const WrongAnimal *pet2 = new WrongCat();
    std::cout << pet1->getType() << std::endl;
    std::cout << pet2->getType() << std::endl;
    pet1->makeSound();
    pet2->makeSound();
    delete meta;
    delete j;
    delete i;
    delete pet1;
    delete pet2;
    return 0;
}
