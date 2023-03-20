/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:08:17 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/20 13:08:18 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

// Dog dog;
// dog.makeSound(); // dog sound
// Animal* dog = new Dog();
// dog.makeSound(); // dog sound
// Dog dog;
// Animal x = dog;
// [                           ]
// [                                            ]
Animal::Animal(){
    std::cout<< "Animal Default constructor called"<<std::endl;
};
Animal::Animal(Animal &other){
    std::cout<< "Animal Copy constructor called"<<std::endl;
    *this = other;
};

Animal &Animal::operator=(const Animal& other){
    std::cout<< "Animal Copy op called"<<std::endl;
    this->type = other.type;
    return *this;
};

Animal::~Animal(){
    
};