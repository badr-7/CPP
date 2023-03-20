/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:16 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 14:58:11 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout<< "Cat Default constructor called"<<std::endl;
    this->_brain = new Brain();
    type = "Cat";
};
Cat::Cat(Cat &other){
    std::cout<< "Cat Copy constructor called"<<std::endl;
    this->_brain = NULL;
    *this = other;
};
Cat& Cat::operator=(const Cat &other){
    std::cout<< "Animal Copy op called"<<std::endl;
    this->type = other.type;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
    return *this;
};

void Cat::makeSound()const {
    std::cout<<"Meow"<<std::endl;
};

Cat::~Cat(){
    std::cout<<"Cat Destructor called"<<std::endl;
    delete _brain;
};

std::string Cat::getType() const{
    return this->type;
};