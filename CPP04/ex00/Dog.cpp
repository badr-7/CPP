/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:22 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/16 10:24:15 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout<< "Dog Default constructor called"<<std::endl;
    type = "Dog";
};
Dog::Dog(Dog &other){
    std::cout<< "Dog Copy constructor called"<<std::endl;
    *this = other;
};
void Dog::makeSound() const {
    std::cout<<"Bark"<<std::endl;
};
Dog& Dog::operator=(const Dog &other){
    this->type = other.type;
    return *this;
};
Dog::~Dog(){
    std::cout<<"Dog Destructor called"<<std::endl;
};

std::string Dog::getType() const{
    return this->type;
};