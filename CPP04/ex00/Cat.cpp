/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:45:16 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/22 13:16:50 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout<< "Cat Default constructor called"<<std::endl;
    type = "Cat";
};
Cat::Cat(Cat &other){
    std::cout<< "Cat Copy constructor called"<<std::endl;
    *this = other;
};
Cat& Cat::operator=(const Cat &other){
    this->type = other.type;
    return *this;
};

void Cat::makeSound()const {
    std::cout<<"Meow"<<std::endl;
};

Cat::~Cat(){
    std::cout<<"Cat Destructor called"<<std::endl;
};

std::string Cat::getType() const{
    return this->type;
};