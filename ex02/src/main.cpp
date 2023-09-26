/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 03:11:36 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/26 08:37:02 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
// #include <unistd.h>

// void lol(void){
//     system("leaks Animal");
// }

int main (){
    // atexit(lol);
    const Animal *array[10];
    for (int i = 0; i < 10; i++)
        i < 5 ? array[i] = new Dog() : array[i] = new Cat();
    for (int i = 0; i < 10; i++)
        array[i]->makeSound();
    for (int i = 0; i < 10; i++)
        delete array[i];
    return 0;
}
