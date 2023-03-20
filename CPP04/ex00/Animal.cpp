/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:08:17 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/20 09:02:25 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal(){
    std::cout<< "Animal Default constructor called"<<std::endl;
};
Animal::Animal(Animal &other){
    std::cout<< "Animal Copy constructor called"<<std::endl;
    *this = other;
};

std::string Animal::getType() const{
    return this->type;
};

Animal &Animal::operator=(const Animal& other){
    this->type = other.type;
    return *this;
};

void Animal::makeSound() const{
    std::cout<<"Animal makeSound"<<std::endl;
};

Animal::~Animal() {
    std::cout<<"Animal Destructor called"<<std::endl;
};