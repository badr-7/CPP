/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:37:33 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 11:56:52 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout<< "WrongAnimal Default constructor called"<<std::endl;
    type = "WorngAnimal";
};
WrongAnimal::WrongAnimal(const WrongAnimal &other){
    std::cout<< "WrongAnimal Copy constructor called"<<std::endl;
    *this = other;
};
WrongAnimal::~WrongAnimal(){
        std::cout<<"WrongAnimal Destructor called"<<std::endl;
};
WrongAnimal & WrongAnimal::operator = (const WrongAnimal &other){
        this->type = other.type;
        return *this;
};

std::string WrongAnimal::getType(){
    return this->type;
};
void WrongAnimal::makeSound() const{
    std::cout<<"WrongAnimal Sound"<<std::endl;
};