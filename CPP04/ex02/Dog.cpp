/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:22 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 15:00:54 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout<< "Dog Default constructor called"<<std::endl;
    this->_brain = new Brain();
    type = "Dog";
};
Dog::Dog(Dog &other){
    std::cout<< "Dog Copy constructor called"<<std::endl;
    this->_brain = NULL;
    *this = other;
};
void Dog::makeSound() const {
    std::cout<<"Bark"<<std::endl;
};
Dog& Dog::operator=(const Dog &other){
    std::cout<< "Animal Copy op called"<<std::endl;
    this->type = other.type;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return *this;
};
Dog::~Dog(){
    std::cout<<"Dog Destructor called"<<std::endl;
    delete _brain;
};

std::string Dog::getType() const{
    return this->type;
};